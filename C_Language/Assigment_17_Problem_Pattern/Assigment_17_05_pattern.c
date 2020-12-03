/*
5. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4 iCol = 4

	Output : 1 2 3 4
			 1 * * 4
			 1 * * 4
			 1 2 3 4
*/
#include<stdio.h>
void Pattern(int , int);
int main()
{
	int iRow=0,iCol=0;

	printf("\n Enter a Row  :");
	scanf("%d",&iRow);
	
	printf("\n Enter a Col :");
	scanf("%d",&iCol);

	Pattern(iRow,iCol);

	return 0;
}
void Pattern(int iRow,int iCol)
{
	int iCnt=0, iCnt1=0;
	if(iRow < 0)
	{
		iRow =-iRow;
	}
	if(iCol < 0)
	{
		iCol =-iCol;
	}
	
	for(iCnt =1 ;iCnt <= iRow ;iCnt ++)
	{
		for(iCnt1 =1 ; iCnt1 <= iCol ; iCnt1 ++)
		{
			 if(iCnt == 1 ||iCnt1 ==1 || iCnt==iRow || iCnt1 == iCol)
			 {	
				printf("%d\t",iCnt1);
			}	
			else
			{
				printf("*\t");		
			}
		}
		printf("\n");
	}
}