def factorial(iNo):
	if iNo == 1:
		return 1
	else :
		return iNo *factorial(iNo -1)	

def main():
	iNo=int(input("Enter the Number :"))
	iRet=factorial(iNo)
	print("factorial is in :",iNo,"is :",iRet)
if __name__=="__main__":
	main()			
	