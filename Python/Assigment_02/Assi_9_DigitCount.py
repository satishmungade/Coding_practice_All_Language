def CountDigit(iNo):
	if iNo < 0:
		iNo=-iNo
	iCnt = 0
	iDigit=0
	while iNo != 0:
		iNo=iNo//10
		iCnt =iCnt + 1
		
	return iCnt

def main():
	iNo=int(input("Enter a Number :")) 
	iRet=CountDigit(iNo);	
	print("Count of Digit is :",iRet)


if __name__=="__main__":
	main()		