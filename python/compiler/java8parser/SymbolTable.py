import sys

class SymbolTable:
	def __init__(self):
		# variables/methods/classes are dictionaries with the variable/method/class names as the key.
		# variable is a dict with keys: "type", "modifiers" 
		# method is a dict with keys: "return_type", "argument_types[]", "modifiers[]"
		# "type" is a dict with keys: "type_base", "type_dim"
		# "base_type" can be one of "int", "String", "char", "byte", ..., or a user-defined type
		# "dimension" is a tuple of (1, 2 or 3 integers)
		# "modifiers[]" is a list of keywords such as "public", "static", "final" etc.
		self.scopes = [{
			"variables":{},
			"methods":{},
			"classes":{},
			"parent":-1
		}]
		self.curr_scope = 0
		self.next_scope = 1
		self.offset = 0

	def addSymbol(self, symbol_type, symbol_name, symbol_details):
		assert(symbol_type in ["variables", "methods", "classes"])
		if (symbol_name in self.scopes[curr_scope][symbol_type].keys()):
			# symbol already exists in the current scope
      return -1
    #symbol doesn't exist in the current scope hence add it
    self.scopes[curr_scope][symbol_type][symbol_name] = symbol_details
	  
	def getScopeOfSymbol(self, symbol_type, symbol_name):
		# symbol_type can be one of "variables", "methods", "classes"
		# search will be performed in current scope, then parent scope, ..., global scope
		assert(symbol_type in ["variables", "methods", "classes"])
		curr_scope = self.curr_scope
		while (curr_scope != -1):
			if (symbol_name in self.scopes[curr_scope][symbol_type].keys()):
				# scope of definition found
				return curr_scope
			else:
				curr_scope = self.scopes[curr_scope]["parent"]
		# the given symbol_name of the given symbol_type was not found
		return -1
	
	def createNewScope():
		# appends a new scope entry into he self.scopes list
		self.scopes.append({"variables":{},"methods":{},"classes":{},"parent":self.curr_scope})
		self.curr_scope = self.next_scope
		self.next_scope += 1

	def closeCurrScope():
		# changes self.curr_scope to parent scope
		self.curr_scope = self.scopes[self.curr_scope]["parent"]