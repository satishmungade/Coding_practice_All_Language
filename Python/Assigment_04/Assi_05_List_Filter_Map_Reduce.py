import functools

def prime(iNo):
	for i in range(2,iNo):
		if iNo % i == 0:
			return False
	return iNo > 1

def MultiplyByTwo(iNo) :
	return iNo * 2

def MaxElement(iNo,iNo1):
	if iNo < iNo1 :
		return iNo1



def main():
	Arr=list()
	iSize=int(input("ENter a size  which you want :"))
	print("Enter a Element in Array :")
	
	for i in range(0,iSize):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)

	newData=list(filter(prime,Arr))
	print("After filtering Data prime is :",newData)

	newData1=list(map(MultiplyByTwo,newData))
	print("After Map return element * 2 is :",newData1)
	
	final = functools.reduce(MaxElement,newData1)
	print("After reduce all Element Addition :",final)    
   
	
if __name__=="__main__":
	main()		



