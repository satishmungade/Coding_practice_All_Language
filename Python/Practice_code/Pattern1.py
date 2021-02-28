'''iRow = 4 iCol = 4
Output : 
	* # # #
	* * # #
	* * * #
	* * * * '''

def Pattern(iRow,iCol):
	if iRow < 0 :
		iRow=-iRow;
	if	iCol < 0:
		iCol=-iCol;
	for i in range(0,iRow) : 
		for j in range(0,iCol) :
			if i< j :
				print("#",end=' ')
			else :
				print("*",end=' ')
		print()	

iRow=int(input("Enter a Row  :"))
iCol=int(input("Enter a collum :"))
Pattern(iRow,iCol)

						