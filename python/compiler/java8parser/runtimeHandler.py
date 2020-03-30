from utils import __getSize__
'''
Register operands are always prefixed with ‘%’. The 80386 registers consist of:
	the 8 32-bit registers ‘%eax’ (the accumulator), ‘%ebx’, ‘%ecx’, ‘%edx’, ‘%edi’, ‘%esi’, ‘%ebp’ (the frame pointer), and ‘%esp’ (the stack pointer).
	the 8 16-bit low-ends of these: ‘%ax’, ‘%bx’, ‘%cx’, ‘%dx’, ‘%di’, ‘%si’, ‘%bp’, and ‘%sp’.
	the 8 8-bit registers: ‘%ah’, ‘%al’, ‘%bh’, ‘%bl’, ‘%ch’, ‘%cl’, ‘%dh’, and ‘%dl’ (These are the high-bytes and low-bytes of ‘%ax’, ‘%bx’, ‘%cx’, and ‘%dx’)
	the 6 section registers ‘%cs’ (code section), ‘%ds’ (data section), ‘%ss’ (stack section), ‘%es’, ‘%fs’, and ‘%gs’.
	the 5 processor control registers ‘%cr0’, ‘%cr2’, ‘%cr3’, ‘%cr4’, and ‘%cr8’.
	the 6 debug registers ‘%db0’, ‘%db1’, ‘%db2’, ‘%db3’, ‘%db6’, and ‘%db7’.
	the 2 test registers ‘%tr6’ and ‘%tr7’.
	the 8 floating point register stack ‘%st’ or equivalently ‘%st(0)’, ‘%st(1)’, ‘%st(2)’, ‘%st(3)’, ‘%st(4)’, ‘%st(5)’, ‘%st(6)’, and ‘%st(7)’. These registers are overloaded by 8 MMX registers ‘%mm0’, ‘%mm1’, ‘%mm2’, ‘%mm3’, ‘%mm4’, ‘%mm5’, ‘%mm6’ and ‘%mm7’.
	the 8 128-bit SSE registers registers ‘%xmm0’, ‘%xmm1’, ‘%xmm2’, ‘%xmm3’, ‘%xmm4’, ‘%xmm5’, ‘%xmm6’ and ‘%xmm7’.

movq moves a quadword (64-bits) from source to destination.
movl moves a long (32-bits) from source to destination.
mov allows the assembler to automatically figure out which variant you want to use.
'''

def runtimeHandler(tac):
		# generate assembly code for GNU Assembly (GAS) using tac
		# ensure that tac is self-sufficient and during runtime code generation
		# you don't use any structures other than tac
		text = []
		system = "linux"
		arg_regs = ["%rdi", "%rsi", "%rdx", "%rcx", "%r8d", "%r9d"]
		# n_args is the number of arguments
		n_args = 0
		# text stores the ascii texts for .text section
		with open("test.s", 'w') as f:
			main = "main"
			if (system == "darwin"):
				main = "_main"
			f.write("\t\t.global " + main + "\n\n")
			f.write("\t\t.text\n")
			for idx, instr in enumerate(tac.code):
				op1, op2, dest, operator = instr
				if (idx in tac.idx_to_label.keys()):
					# there is a label associated with this line of code
					label = tac.idx_to_label[idx]
					f.write(label + ":\n")
				# handling function call
				if (dest == ":param:"):
					# a function call must be starting
					# push the arguments into the registers (in x86-64) or stack (in x86)
					# move first 6 arguments into the argument registers
					# %edi, %esi, %edx, %ecx, %r8d, %r9d
					# if there are more arguments, then push them onto the stack
					# or push them onto the stack
					if (n_args < 6):
						f.write("mov\t" + op1 + ", " + arg_regs[n_args] +'\n')
					else:
						# now all future arguments must be pushed onto the stack
						# TODO: add support for more than 6 arguments
						f.write("mov\t" + op1 + ", " + "96(%rbp)\n")
					n_args += 1
				elif (operator == "call"):
					n_args = 0;
					# before any call, the function stack should be alligned to a 16-bit boundary
					# also register %al should contain the number of vector registers used for 
					# a variable argument function such as printf()
					# transfer control to the callee
					f.write("call\t" + dest + '\n')
					while(args > 0):
						f.write("call\t" + "%ecx" + '\n')
				elif (operator == "function"):
					# create function label
					# after this function was called, the return pointer (of size 8 bytes) was
					# implicitly placed onto the stack, hence the stack is misaligned by 8 bytes
					f.write(dest + ":\n")
					# save caller's rbp onto the stack, note that this also realigns the stack
					f.write("\t\tpush\t%rbp\n")
					# move the current rsp to rbp 
					f.write("\t\tmov\t%rsp, %rbp\n")
					# create stack space of 96 bytes, (stack space must be in multiple of 16 bytes)
					f.write("\t\tsubl\t%rsp, $96\n")
					# allocate stack space for local variables
					# print("sub esp size")
					# access first parameter to the function
					# print("mov ebx [ebp+8]")
					# access second parameter to the function
					# print("mov ebx [ebp+12]")
                elif (operator == "goto"):
                    f.write("\t\tjmp\t" + dest + "\n")
				elif (dest == ":r:"):
					# put the return value into the eax register
					# note that if the return value is a constant (say $4)
					# then simply use movl $4, %eax
					regname = "%rax"
					size = __getSize__(operator[2:])
					if (size == 1):
						regname = "%al"
					elif (size == 2):
						regname = "%ax"
					f.write("\t\tmov\t" + op1 + ", " + regname)
                elif (operator == "ret"):
					# callee is about to return
					# first pop the stack
					f.write("\t\tmov\t" + "%rbp, %rsp")
					# restore base pointer
					f.write("\t\tpop\t" + "%rbp\n")
					# return to the return address (which should now be on top of the stack)
					f.write("\t\tret\n")
