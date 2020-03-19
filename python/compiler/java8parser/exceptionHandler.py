from antlr4 import *
class exceptionHandler:
	def raiseException(self,ctx, err,e):
		exceptionMessage = err
		line_number = -1
		if ctx is not None:
			while not isinstance(ctx, tree.Tree.TerminalNode):
				ctx = ctx.getChild(0)
			line_number = ctx.getSymbol().line
			exceptionMessage = "Line "+str(line_number)+":"+exceptionMessage
		if(e == 0):
			pass
		raise Exception(exceptionMessage)


