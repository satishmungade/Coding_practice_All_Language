/*3. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 6 iCol = 6
Output : * * * * * *
		 *       * *
		 *     *   *
		 *  *      *
	     * *       *
		 * * * * * * 
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
	if(iRow != iCol)
	{
		printf(" ! Invalid Input !");
		return ;
	} 
	for(iCnt =1 ;iCnt <= iRow ;iCnt ++)
	{
		for(iCnt1 =iCol ; iCnt1 >=1 ; iCnt1 --)  //Colum magun print kar 
		{
				if(iCnt ==1 || iCnt1== 1 || iCnt == iRow || iCnt1 == iCol || iCnt ==iCnt1)
			 	{
					printf("*\t");
			 	}
				else if(iCnt < iCnt1 || iCnt > iCnt1 )
				{	
					printf("\t");
				}
				
		}
		printf("\n");
	}
}