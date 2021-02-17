def Pattern(iNo):
	if iNo < 0:
		iNo=-iNo
	for i in range(1,iNo+1):
		for j in range(1,iNo+1):
			print(j,end=' ')
			
		print()

def main():
	iNo=int(input("Enter a value :"))
	Pattern(iNo)

if __name__=="__main__":
	main()					
'''
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
'''