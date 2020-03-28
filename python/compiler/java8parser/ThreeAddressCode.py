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
	Examples:
	'+:int', '-:long', '=:boolean'.
	a <- b+c === [b,c,a,+] .
	goto L1 === ['', '', 'L1', 'goto']
	function: myfunc === ['', '', myfunc, 'function'] (Used in assembly generation)
	Supported instructions:
	=:<type> (boolean, int, long, float, double, pointer(treat as int))
	*, +, -, /, % :<type>
	<<:type (leftshift), >>:type (rightshift) >>>(unsigned right shift)
	&:<type> bitwise and
	|:<type> bitwise or
	^:<type> bitwise xor
	neg:<type> (int,float,long,double) (stores negation of op1 into dest)
	complement:<type> (int, long) bitwise complement '~'.
	invert:boolean inverts a boolean
	<:<type> (result type is boolean. op1=lhs, op2=rhs, dest=result
	<= > >= != == similar to above
	store:<type> op1=temporary value stored, dest=address where value has to be stored.
	load:<type> op1=address to be loaded. dest=temporary in which value is copied.
	goto
	ret
	function
	call
	pop
	'''
	def __init__(self):
		self.labels = 0 #Number of labels
		self.code = [] #List of instructions
		self.label_to_idx = {}
		self.idx_to_label = {}
		self.idx_to_comments = {}
		self.label_to_functions = {}
		self.current_class = None
	
	def genLabel(self,funcName = None,className = None): #Generates new label
		if(len(self.code) in self.idx_to_label):
			return self.idx_to_label[len(self.code)]
		newLabel = "L" + str(self.labels)
		self.label_to_idx[newLabel] = len(self.code)
		self.idx_to_label[len(self.code)] = newLabel
		'''
		# Will create a dictionary for classes and methods and their label
		# Eg class starts as L0 and class.func1 starts at L1 and class.func2 starts at L3
		Then 
		label_to_functions = {
			"class" : {
				":start:" : "L0",
				"func1" : "L1",
				"func2" : "L2"
			}
		}
		'''
		if className is not None:
			self.label_to_functions[className] = {}
			self.label_to_functions[className][':start:'] = newLabel
			self.current_class = className
		if funcName is not None:
			self.label_to_functions[self.current_class][funcName] = newLabel
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
  