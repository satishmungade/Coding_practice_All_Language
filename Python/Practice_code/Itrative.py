def Start(iNo,Massage):
	iCnt=0
	while iCnt < iNo :
		print(Massage)
		iCnt= iCnt+1


def main():	
	iNo=int(input("Enter a Number :"))
	name=input("enter a name :")
	Start(iNo,name)

if __name__=="__main__":
	main()	