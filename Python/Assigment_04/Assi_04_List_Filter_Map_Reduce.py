import functools

def Evan(iNo):
	if iNo % 2 ==0:
		return True
	else :
		return False

def Square(iNo):
	return iNo * iNo

def AdditionofAllElm(iNo,iNo1):
	return iNo + iNo1


def main():
	Arr=list()
	iSize=int(input("ENter a size  which you want :"))
	print("Enter a Element in Array :")
	
	for i in range(0,iSize):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)

	newData=list(filter(Evan,Arr))
	print("After filtering Data Evan is :",newData)

	newData1=list(map(Square,newData))
	print("After Map  square return element is :",newData1)
	
	
	final = functools.reduce(AdditionofAllElm,newData1)
	print("After reduce all Element Addition :",final)    
    
	
if __name__=="__main__":
	main()		




