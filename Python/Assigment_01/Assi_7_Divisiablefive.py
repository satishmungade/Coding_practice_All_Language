def Divisiable(iNo):
	if iNo < 0:
		iNo=-iNo
	if iNo % 5 ==0 :
		return True
	else :
		return False	
		
def main():
	ivalue=int(input("Enter a Number :"))
	bRet=Divisiable(ivalue)
	if bRet == True :
		print("its Divisiable five")
	else :
		print("its Not Divisiable five")	

if __name__=="__main__":
	main()	
