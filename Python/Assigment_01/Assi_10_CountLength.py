def CountLength(ivalue):
	count =0
	for i in ivalue:
		count = count +1
	return count	
	
def main():
	ivalue=input("Enter a String :")
	iRet=CountLength(ivalue)
	print("String Length is :",iRet)
if __name__=="__main__":
	main()	