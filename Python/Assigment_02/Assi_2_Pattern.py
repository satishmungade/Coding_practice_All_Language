def Starpeint(iNo):
	if iNo < 0:
		iNo =-iNo
	for i in range(iNo):
		for i in range(iNo):
			print("*",end=' ')
		print()	


def main():
	iNo=int(input("Enter value for pattern :"))
	Starpeint(iNo)

if __name__=="__main__":
	main()				 

'''
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
'''	