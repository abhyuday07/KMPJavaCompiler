if __name__ is not None and "." in __name__:
	from .SymbolTable import SymbolTable
else:
	from SymbolTable import SymbolTable


global symTable
symTable = SymbolTable()

class ThreeAddressCode:
	'''
	TAC format: [op1, op2, dest, operator]
	Labels, identifiers etc are stored as string. Integers (immediate operands) stored as integer.
	Operators: '+', '-', 'neg' (negation), 'goto', 'label', 'function'
	Operators which can have multiple types of operands will have additional information seperated by colons.
	Examples:
	'+:int', '-:long', '=:boolean'.
	a <- b+c === [b,c,a,+] .
	goto L1 === ['', '', 'L1', 'goto']
	label: L1 === ['','', 'L1', 'label']  (Used in backpatching.)
	function: myfunc === ['', '', myfunc, 'function'] (Used in assembly generation)
	  
	'''
	def __init__(self):
		self.labels = 0 #Number of labels
		self.code = [] #List of instructions
		self.label_to_idx = {}
		self.idx_to_label = {}
		self.idx_to_comments = {}
	
	def genLabel(self): #Generates new label
		if(len(self.code) in self.idx_to_label):
			return self.idx_to_label[len(self.code)]
		newLabel = "L" + str(self.labels)
		self.label_to_idx[newLabel] = len(self.code)
		self.idx_to_label[len(self.code)] = newLabel
		self.labels += 1
		return newLabel
  
	def append(self, op1, op2, dest, operator,addComments = None):
		if op1 is None:
			op1 = ''
		if op2 is None:
			op2 = ''
		if dest is None:
			dest = ''
		if operator is None:
			operator = ''
		if addComments is None:
			self.idx_to_comments[len(self.code)] = addComments
		self.code.append([op1, op2, dest, operator])
		return len(self.code) - 1
	
	def backpatch(self, list1, label):
		for x in list1:
			self.code[x][2] = label
  