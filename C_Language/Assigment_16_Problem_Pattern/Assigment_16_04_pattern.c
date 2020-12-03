/*4. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : 1 2 3 4 5
		 -1 -2 -3 -4 -5
		 1 2 3 4 5
		 -1 -2 -3 -4 -5
		1 2 3 4 5*/
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
	
		if(iCnt % 2==0)
			{
				for(iCnt1 =1 ;iCnt1 <=iCol; iCnt1 ++)
				{
					printf("%d\t",-iCnt1);
				}
			}
		else	
			for(iCnt1 = 1 ; iCnt1 <= iCol ; iCnt1 ++)
			{
					printf("%d\t", iCnt1);
				
			}
	printf("\n");
	}		
			
}
