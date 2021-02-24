#import CheckPrime as CP

def PrimeEleAddition(Arr,iSize):
	Count=0
	Add=0
	for i in range(iSize):
		for j in range(2,Arr[i]):
			if (Arr[i] % j) == 0 :
				break
			else :	
				Add = Add + Arr[i]
				break
			
	return Add			

def main():
	Arr=list()
	iSize=int(input("Enter size which you want array:"))
	print("Enter Element in Array :")
	for i in range(0,iSize):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)
	iRet=PrimeEleAddition(Arr,iSize)
	print("Prime Element Addition is:",iRet)

if __name__=="__main__":
	main()	






