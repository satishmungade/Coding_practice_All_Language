def Starprint(iNo):
	if iNo < 0:
		iNo=-iNo;
	iCnt=0 
	while iCnt < iNo :
		print("*",end=' ')
		iCnt = iCnt +1


def main():
	ivalue=int(input("Enter a Number :"))
	Starprint(ivalue)

if __name__=="__main__":
	main()	