class ThreeAddressCode:
    '''
    TAC format: [op1, op2, dest, operator]
    Everything is stored as string.
    Examples:
    a <- b+c === [b,c,a,+]
    goto L1 === ['', '', 'L1', 'goto']
    label: L1 === ['','', 'L1', 'label']  (Used in backpatching.)
    function: myfunc === ['', '', myfunc, 'function'] (Used in assembly generation)
      
    '''
    def __init__(self):
        self.labels = 0 #Number of labels
        self.code = [] #List of instructions
    
    def genLabel(self): #Generates new label
        newLabel = "L" + str(self.labels)
        self.labels += 1
        return newLabel
  
    def append(self, op1, op2, dest, operator):
        self.code.append([op1, op2, dest, operator])
        symbolTable.freeTemporary(op1)
        symbolTable.freeTemporary(op2)
    
    def backpatch(self, list1):
        for x in list1:
            self.code[x][2] = label
  