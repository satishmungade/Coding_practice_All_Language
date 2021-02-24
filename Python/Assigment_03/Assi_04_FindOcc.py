def FindOcc(Arr,iSize,iKey):
	iCnt =0 
	for i in range(0,iSize):
		if Arr[i] == iKey :
			iCnt=iCnt + 1
	return iCnt

def main():
	Arr=list()
	iSize=int(input("Enter size which you want array :"))
	print("Enter Element in Array :")
	for i in range(0,iSize):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)
	iKey=int(input("Enter Key which want Occurance check :"))
	iRet=FindOcc(Arr,iSize,iKey)
	print("Occurance Give Element is :",iRet)

if __name__=="__main__":
	main()	


