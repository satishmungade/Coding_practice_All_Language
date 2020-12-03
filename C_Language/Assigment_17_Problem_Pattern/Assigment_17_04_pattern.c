/*Input : iRow = 6 iCol = 5

Output : * * * * *
		 * @ @ @ *
		 * @ @ @ *
		 * @ @ @ *
		 * @ @ @ *
		 * * * * *
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
				printf("*\t");
			}	
			else
			{
				printf("@\t");		
			}
		}
		printf("\n");
	}
}