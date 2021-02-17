def CheckEvan(iNo):
	if iNo < 0 :
		iNo=-iNo
	if iNo % 2 == 0:
		return True
	else :
		return False		

def main():
	iNo=int(input("ENter a Number to Check Evan or Odd :"))
	bRet=CheckEvan(iNo)
	if bRet == True :
		print("Number is Evan ")
	else :
		print("Number is Odd") 

if __name__=="__main__":
	main()
			

