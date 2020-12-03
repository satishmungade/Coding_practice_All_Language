/*5. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 4
Output : 1 1 1 1
		 2 2 2 2
		 3 3 3 3
		 4 4 4 4
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
	int iCnt=0,iCnt1=0;
	if(iRow < 0 )
	{
		iRow=-iRow;
	}
	if(iCol < 0)
	{
		iCol = -iCol;
	}
	for(iCnt =1 ;iCnt <= iRow ; iCnt ++)
	{
		for(iCnt1 = 1 ; iCnt1 <= iCol ; iCnt1 ++)
		{
			
				printf("\t%d",iCnt);
		
		}
	
		printf("\n");
		
	}
}