/*3. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 5 iCol = 5
Output : a b c d e
	   	 1 2 3 4 5
		 a b c d e
		 1 2 3 4 5
   		 a b c d e
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
	for(iCnt =0 ;iCnt < iRow  ; iCnt ++)  
	{
		for(iCnt1 = 0 ; iCnt1 < iCol ; ++ iCnt1) 
		{
			if(iCnt % 2== 0)
				printf("%c\t",'a'+iCnt1);
			else
				printf("%d\t",iCnt1 +1 );	

		}
		printf("\n\n");
	}
}
