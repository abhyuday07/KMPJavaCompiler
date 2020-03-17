import sys

class SymbolTable:
    def __init__(self):
        # variables/methods/classes are dictionaries with the variable/method/class names as the key.
        # variable is a dict with keys: "type", "modifiers" 
        # method is a dict with keys: "return_type", "argument_types[]", "modifiers[]"
        # "type" is a dict with keys: "type_base", "type_dims"
        # "base_type" can be one of "int", "String", "char", "byte", ..., or a user-defined type
        # "dimension" is a list of (1, 2 or 3 integers)
        # "modifiers[]" is a list of keywords such as "public", "static", "final" etc.
        # temporaries[] is a list of booleans storing if i-th temporary is free. Used in tac generation (eg. a+b+c+d)
        self.scopes = [{
            "variables":{},
            "methods":{},
            "classes":{},
            "parent":-1
        }]
        self.curr_scope = 0
        self.next_scope = 1
        self.offset = 0
        self.tempCount = 1

    def addSymbol(self, symbol_type, symbol_name, symbol_details):
        assert(symbol_type in ["variables", "methods", "classes"])
        if (symbol_name in self.scopes[self.curr_scope][symbol_type]):
            return -1
            # symbol already exists in the current scope
    #symbol doesn't exist in the current scope hence add it
        self.scopes[self.curr_scope][symbol_type][symbol_name] = symbol_details
      
    def getScopeOfSymbol(self, symbol_type, symbol_name):
        # symbol_type can be one of "variables", "methods", "classes"
        # search will be performed in current scope, then parent scope, ..., global scope
        assert(symbol_type in ["variables", "methods", "classes"])
        tmp_scope = self.curr_scope
        while (tmp_scope != -1):
            if (symbol_name in self.scopes[tmp_scope][symbol_type]):
                return tmp_scope
            else:
                tmp_scope = self.scopes[tmp_scope]["parent"]
        # the given symbol_name of the given symbol_type was not found
        return None
    
    def createNewScope(self):
        # appends a new scope entry into he self.scopes list
        self.scopes.append({"variables":{},"methods":{},"classes":{},"parent":self.curr_scope})
        self.curr_scope = self.next_scope
        self.next_scope += 1

    def closeCurrScope(self):
        # changes self.curr_scope to parent scope
        self.curr_scope = self.scopes[self.curr_scope]["parent"]

    def lookup(self, symbol_type, symbol):
        # searches for a symbol_type(variable, method etc.) and symbol and returns it's object.
        tmp_scope = self.curr_scope
        while tmp_scope != -1:
            if symbol in self.scopes[tmp_scope][symbol_type]:
                return self.scopes[tmp_scope][symbol_type][symbol]
            elif (symbol_type == 'variables'):
                # This variable may be in the method parameters
                for method in self.scopes[tmp_scope]['methods']:
                    if(symbol in self.scopes[tmp_scope]['methods'][method]['parameters']):
                        return self.scopes[tmp_scope]['methods'][method]['parameters'][symbol]
            tmp_scope = self.scopes[tmp_scope]['parent']
        return None


    def getTemporary(self):
        return "__temp_" + str(self.tempCount)
    
    def errorHandler(self,symbol):
        print(str(symbol)+" not found in SymbolTable")
