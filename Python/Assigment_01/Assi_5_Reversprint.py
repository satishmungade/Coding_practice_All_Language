def Revers(iNo):
	if iNo < 0 :
		iNo=-iNo
	while iNo != 0:
		print(iNo)
		iNo = iNo -1	

def main():
	ivalue=int(input("Enter a Number :"))
	Revers(ivalue)

if __name__=="__main__":
	main()			