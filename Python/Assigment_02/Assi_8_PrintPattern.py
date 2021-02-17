def Pattern(iNo):
	if iNo < 0:
		iNo=-iNo
	for i in range(1,iNo+2):
		for j in range(1,iNo+2):
			if(i > j):
				print(j,end=" ")
			else:
				print(" ",end=" ")	
		print()

def main():
	iNo=int(input("Enter a value :"))
	Pattern(iNo)

if __name__=="__main__":
	main()				

'''
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

'''		
