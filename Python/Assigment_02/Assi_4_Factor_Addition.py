def FactorAddition(iNo):
	if iNo < 0:
		iNo=-iNo
	iSum=0
	for i in range(1,iNo):
		if iNo % i == 0 :
			iSum=iSum + i
	return iSum

def main():
	iNo=int(input("enter a Number :"))
	iRet=FactorAddition(iNo)
	print("FactorAddition is :",iRet)			

if __name__=="__main__":
	main()
		