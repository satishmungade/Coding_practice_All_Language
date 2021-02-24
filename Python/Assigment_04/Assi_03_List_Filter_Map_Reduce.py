import functools

def check(iNo):
	if iNo >= 70 and iNo <= 90 :
		return True
	else :
		return False	

def increement(iNo):
	return iNo + 10


def Add(iNo,iNo1):
	return iNo *iNo1
	
def main():
	Arr=list()
	iSize=int(input("ENter a size  which you want :"))
	print("Enter a Element in Array :")
	
	for i in range(0,iSize):
		iNo=input("Element :")
		Arr.append(int(iNo))
	print("Your Element in Array :",Arr)
	
	newData=list(filter(check,Arr))
	print("After filtering Data 70 to 90 is :",newData)
	
	newData1=list(map(increement,newData))
	print("After Map  Data + 10 value is :",newData1)
	
	final = functools.reduce(Add,newData1)
	print("After reduce all Element multiplaction is  ",final)    
    
if __name__=="__main__":
	main()		