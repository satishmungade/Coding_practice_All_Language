def checkNum(iNo):
	if iNo == 0:
		print("Number is Zero :")
	elif iNo < 0 :
		print("Number is Negative ")
	else :
		print("Number is Positive")

def main():
	ivalue=int(input("Enter a Number :"))
	checkNum(ivalue)

if __name__=="__main__":
	main()		