def CheckPrime(iNo):
	if iNo < 0:
		iNo=-iNo
	iSet =0	
	for x in range(2,iNo):
		if iNo % x ==0 :
			iSet =1
			break
	if iNo == 1	:
		print("1 is s neither prime nor composite")
	else:
		if iSet == 0:
			return True
		else :
			return False

def main():
	iNo=int(input("Enter a Number to Check or not Prime :"))
	iRet=CheckPrime(iNo)
	if iRet == True :
		print("Number is prime ")
	else :
		print("Number is not Prime")

if __name__=="__main__":
	main()								