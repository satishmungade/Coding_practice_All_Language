def Factorial(iNo):
	if iNo < 0 :
		iNo=-iNo
	elif iNo == 0:
		return 1	
	
	iFact=1
	for i in range(1,iNo + 1):
		iFact = iFact * i
	return iFact	

def main():
	ivalue=int(input("Enter value "))
	iRet=Factorial(ivalue)
	print("give Number Factorial ",ivalue," is :",iRet)

if __name__=="__main__":
	main()	

