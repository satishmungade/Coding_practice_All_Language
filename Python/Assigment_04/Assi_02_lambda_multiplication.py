multiplication = lambda iNo1,iNo2 : iNo1 * iNo2

def main():
	iValue1=int(input("Enter First Value1 :"))
	iValue2=int(input("Enter Scound iValue2 :"))
	iRet = multiplication(iValue1,iValue2)
	print("multiplication is using Lambda Experation :",iRet)

if __name__=="__main__":
	main()


