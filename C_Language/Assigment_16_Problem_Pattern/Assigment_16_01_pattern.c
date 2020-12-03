/*1. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 4 iCol = 4
Output : 1 2 3 4
		 5 6 7 8
		 9 1 2 3
		 4 5 6 7
*/

#include<stdio.h>
void Pattern(int ,int);
int main()
{
	int iRow=0,iCol=0;
	printf("Enter A Row and column  For pattern :");
	scanf("%d %d",&iRow,&iCol);
	Pattern(iRow,iCol);

	return 0;
}
void Pattern(int iRow,int iCol)
{
	int iCnt=0,iCnt1=0,iTable=1;
	if(iRow < 0 )
	{
		iRow=-iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(iCnt =1 ;iCnt <=iRow  ; iCnt ++)  
	{
		for(iCnt1 = 1; iCnt1 <= iCol ; iCnt1 ++ ,iTable ++) //iTable sequnes print to use.
		{
			printf("%d\t",iTable );
			if(iTable == 9)
			{
				iTable =0;
			}

		}
		printf("\n\n");
	}
}