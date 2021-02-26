def Display(iNo):
	if iNo != 0:
		print("*",end=' ')
		Display(iNo-1)

def main():
	iNo=int(input("Enter the Number :"))
	Display(iNo)

if __name__=="__main__":
	main()			