class Arithmetic :
	def __init__(self):
		self.iValue=0
		self.iValue1=0
		self.Ans=0
	def Accept(self):
		self.iValue=int(input("\t Enter A first iValue is :"))
		self.iValue1=int(input("\t Enter A Scound iValue is :"))	

	def Addition(self):
		self.Ans=self.iValue + self.iValue1
		return self.Ans
	
	def Substraction(self):
		self.Ans=self.iValue - self.iValue1
		return self.Ans
		
	def Multiplaction(self):
		self.Ans=self.iValue * self.iValue1
		return self.Ans
	
	def Division(self):
		self.Ans=self.iValue // self.iValue1
		return self.Ans	

def main():
	print("---object First--- :")
	obj=Arithmetic()
	obj.Accept()
	iRet=obj.Addition()
	print("\t Addition is Given Number is :",iRet)
	iRet=obj.Substraction()
	print("\t Substraction is Given Number is :",iRet)
	iRet=obj.Multiplaction()
	print("\t Multiplaction is Given Number is :",iRet)
	iRet=obj.Division()					
	print("\t Division is Given Number is :",iRet)


	print("\n--- Object Secound ----")
	obj1=Arithmetic()
	obj1.Accept()
	iRet=obj1.Addition()
	print("\t Addition is Given Number is :",iRet)
	iRet=obj1.Substraction()
	print("\t Substraction is Given Number is :",iRet)
	iRet=obj1.Multiplaction()
	print("\t Multiplaction is Given Number is :",iRet)
	iRet=obj1.Division()					
	print("\t Division is Given Number is :",iRet)
if __name__=="__main__":
	main()	