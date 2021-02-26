def Display(iNo):
	if iNo > 0:
		Display(iNo -1)
		print(iNo,end=' ')

def main():
	iNo=int(input("Enter the Number :"))
	Display(iNo)

if __name__=="__main__":
	main()			