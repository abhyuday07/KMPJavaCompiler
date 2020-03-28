def runtimeHandler(tac):
		# generate assembly code for GNU Assembly (GAS) using tac
		# ensure that tac is self-sufficient and during runtime code generation
		# you don't use any structures other than tac
		text = []
		# text stores the ascii texts for .text section
		with open("test.s", 'w') as f:
			f.write('\t\t.global _start\n\n')
			f.write('\t\t.text\n')
			for instr in tac.code:
				op1, op2, dest, operator = instr
				# handling function call
				if (dest == ":param:"):
					# a function call must be starting
					# push the arguments into the registers and stack
					# move first 6 arguments into the argument registers
					# %edi, %esi, %edx, %ecx, %r8d, %r9d
					# if there are more arguments, then push them onto the stack
					f.write("push\t" + op1 + '\n')
				elif (operator == "call"):
					# transfer control to the callee
					f.write("call\t" + dest + '\n')
				elif (operator == "function"):
					# create function label
					f.write(dest + ":\n")
					# save caller's rbp onto the stack
					f.write("\t\tpushq\t%rbp\n")
					# move the current rsp to rbp 
					f.write("\t\tmovq\t%rsp, %rbp\n")
					# create stack space of 100 bytes
					f.write("\t\tsubq\t%rsp, $100\n")
					# allocate stack space for local variables
					# print("sub esp size")
					# access first parameter to the function
					# print("mov ebx [ebp+8]")
					# access second parameter to the function
					# print("mov ebx [ebp+12]")

