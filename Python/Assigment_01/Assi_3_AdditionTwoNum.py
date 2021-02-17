def Addition(iNo,iNo1):
	if iNo < 0:
		iNo=-iNo
	if iNo1 < 0 :
		iNo1 =- iNo1	
	return iNo + iNo1	

def main():
	iNo=int(input("ENter firat Number :"))
	iNo1=int(input("Enter 2nd Number  :"))
	iRet=Addition(iNo,iNo1)
	print("Addition is ",iRet)

if __name__=="__main__":
	main()	
