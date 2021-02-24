power=lambda iNo:iNo * iNo

def main():
	iNo=int(input("Enter a Number : "))
	iRet=power(iNo)
	print("Power of given Number :",iRet)

if __name__=="__main__":
	main()	