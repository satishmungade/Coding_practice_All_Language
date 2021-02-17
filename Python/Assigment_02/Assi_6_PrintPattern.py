def Pattern(iNo):
	if iNo < 0:
		iNo=-iNo
	for i in range(0,iNo):
		for j in range(iNo,-1,-1):
			if(i < j):
				print("*",end=" ")
			else:
				print(" ",end=" ")	
		print()

def main():
	iNo=int(input("Enter a value :"))
	Pattern(iNo)

if __name__=="__main__":
	main()					
'''
* * * * *
* * * *
* * *
* *
*
'''