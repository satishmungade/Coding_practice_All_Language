def MaxElement(Arr,iSize):
	Max=Arr[0]
	for i in range(0,iSize):
		if Arr[i] > Max :
			Max=Arr[i]
	return Max

def main():
	Arr=list()
	iSize=int(input("Enter Size of element in Array :"))			
	print("Enter A element in Array:")
	for i in range(0,int(iSize)):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)
	iRet=MaxElement(Arr,iSize)
	print("Max Element :",iRet)

if __name__=="__main__":
	main()	

