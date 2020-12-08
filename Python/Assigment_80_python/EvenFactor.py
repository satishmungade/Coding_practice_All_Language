def FacterDisplay(iNo):
	for x in range(1,iNo):
		if iNo % x ==0:
			print(x)
		

iNo=int(input("Enter a number :"))
FacterDisplay(iNo)	