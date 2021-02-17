def SumDigit(iNo):
	if iNo < 0:
		iNo=-iNo
	iSum=0
	while iNo != 0:
		iSum=iSum + iNo % 10 
		iNo=iNo//10
				
	return iSum

def main():	
	iNo=int(input("Enter a Number :")) 
	iRet=SumDigit(iNo);	
	print("Sum of iDigits is",iRet)


if __name__=="__main__":
	main()		