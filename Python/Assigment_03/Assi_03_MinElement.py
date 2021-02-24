def MinElement(Arr,iSize):
	Min=Arr[0]
	for i in range(0,iSize):
		if Arr[i] < Min :
			Min = Arr[i]
	return Min

def main():
	Arr=list()
	iSize=int(input("Enter a Size of Element :"))
	print("Enter Element in Array :")
	for i in range(0,int(iSize)):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)
	iRet=MinElement(Arr,iSize)
	print("Minimum Element in Array is :",iRet)

if __name__=="__main__":
	main()	


		