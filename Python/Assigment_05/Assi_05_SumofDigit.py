def SumOfDigit(iNo):
	if iNo == 0:
		return 0
	else :
		return (iNo % 10 + SumOfDigit(int(iNo/10)))

def main():
	Num=int(input("Enter a Number :"))
	iRet=SumOfDigit(Num)
	print("Sum of digits in :",Num,"is :", iRet)		

if __name__=="__main__":
	main()	