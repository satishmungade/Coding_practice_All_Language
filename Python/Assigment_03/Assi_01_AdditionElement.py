def AdditionElement(Arr,iSize):
	Add = 0
	for i in range(0,iSize):
		Add=Add + Arr[i]
	return Add		

def main():

    Arr=list()
    iSize=int(input("Enter size of Element :"))
    print("Enter element in array :")
    for i in range(0,int(iSize)):
        iNo=input("Num :")
        Arr.append(int(iNo))
    print("Your Enter Element is :",Arr)
    iRet=AdditionElement(Arr,iSize)
    print("Addition is :",iRet)

if __name__=="__main__":
        main()

