import Arithmatic_Modul as Arithmatic 
def main():
	iNo=int(input("Enter First Number :"))
	iNo1=int(input("Enter Scound Number :"))

	iAns=Arithmatic.Addition(iNo,iNo1)
	print("\n\tAddition is :",iAns)	
	
	iAns=Arithmatic.Substraction(iNo,iNo1)
	print("\tSubstraction is :",iAns)
	
	iAns=Arithmatic.Multiplication(iNo,iNo1)
	print("\tMultiplication is :",iAns)
	
	iAns=Arithmatic.Division(iNo,iNo1)
	print("\tDivision is :",iAns)

if __name__=="__main__":
	main()