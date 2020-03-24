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
        self.tempCount = 0
        self.scope_lookup = {}
        self.node_to_table = {}
        self.string_constants = []
        self.temp_to_type = {}

    def addSymbol(self, symbol_type, symbol_name, symbol_details):
        assert(symbol_type in ["variables", "methods", "classes"])
        if (symbol_name in self.scopes[self.curr_scope][symbol_type]):
            return -1
            # symbol already exists in the current scope
            # symbol doesn't exist in the current scope hence add it
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
    
    def createNewScope(self,addScopeLookup=None,className=None):
        # appends a new scope entry into he self.scopes list
        self.scopes.append({"variables":{},"methods":{},"classes":{},"parent":self.curr_scope})
        if(className):
            self.scope_lookup[str(className)+':'+str(self.curr_scope)] = self.next_scope
        if(addScopeLookup):
            self.node_to_table[id(addScopeLookup)] = self.next_scope
        self.curr_scope = self.next_scope
        self.next_scope += 1

    def invokeScope(self,ctx):
        self.curr_scope = self.node_to_table[id(ctx)]
    def closeCurrScope(self):
        # changes self.curr_scope to parent scope
        self.curr_scope = self.scopes[self.curr_scope]["parent"]

    def lookup(self, symbol_type, symbol, resolveName = None):
        # searches for a symbol_type(variable, method etc.) and symbol and returns it's object.
        tmp_scope = self.curr_scope
        if(resolveName == None):
            while tmp_scope != -1:
                if symbol in self.scopes[tmp_scope][symbol_type]:
                    return self.scopes[tmp_scope][symbol_type][symbol]
                elif (symbol_type == 'variables'):
                    # This variable may be in the method parameters
                    for method in self.scopes[tmp_scope]['methods']:
                        if(symbol in self.scopes[tmp_scope]['methods'][method]['parameters']):
                            return self.scopes[tmp_scope]['methods'][method]['parameters'][symbol]
                tmp_scope = self.scopes[tmp_scope]['parent']
        else:
            assert(len(resolveName) > 0)
            while tmp_scope != -1:
                if resolveName[0] in self.scopes[tmp_scope]['classes']:
                    break
                tmp_scope = self.scopes[tmp_scope]["parent"]
            if(tmp_scope != -1):
                isErr = False
                for i in range(1,len(resolveName)):
                    tmp_scope = self.scope_lookup.get(str(resolveName[i-1])+':'+str(tmp_scope))
                    if tmp_scope == None:
                        isErr = True
                    else:
                        if(resolveName[i] not in self.scopes[tmp_scope]['classes']):
                            isErr = True
                if(isErr):
                    return None
                else:
                    # lookup method/variable name in class
                    tmp_scope = self.scope_lookup.get(str(resolveName[-1])+':'+str(tmp_scope))
                    assert(tmp_scope != None)
                    if symbol in self.scopes[tmp_scope][symbol_type]:
                        return self.scopes[tmp_scope][symbol_type][symbol]
        return None


    def getTemporary(self,ptype):
        self.tempCount += 1
        self.temp_to_type[":t" + str(self.tempCount)+":"] = ptype
        # Store the type of this variable
        return ":t" + str(self.tempCount)+":"
    
    def addStringConstant(self,string):
        self.string_constants.append(string)
        return len(self.string_constants) - 1
    def errorHandler(self,symbol):
        print(str(symbol)+" not found in SymbolTable")
