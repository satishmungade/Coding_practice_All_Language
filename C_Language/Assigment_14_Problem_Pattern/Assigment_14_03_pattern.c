/*3. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3 iCol = 5
Output : 5 4 3 2 1
5 4 3 2 1
5 4 3 2 1*/
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
	for(iCnt =iRow ;iCnt >= 1 ; iCnt --)
	{
		for(iCnt1 = iCol ; iCnt1 >= 1 ; iCnt1 --)
		{
			printf("%d\t",iCnt1);
		}
	
		printf("\n");
	}
}