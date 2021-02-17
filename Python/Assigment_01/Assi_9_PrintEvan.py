def printEvanNums(iNo):
	if iNo < 0 :
		iNo=-iNo
	iCnt =0
	while(iCnt <= iNo):
		if iCnt % 2 ==0:
			print(iCnt,end=' ')
		iCnt =iCnt+1		


def main():
	ivalue=int(input("Enter a Number :"))
	printEvanNums(ivalue)

if __name__=="__main__":
	main()	