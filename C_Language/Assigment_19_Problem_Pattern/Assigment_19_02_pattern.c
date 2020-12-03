/*2. Accept number of rows and number of columns from user and display below
pattern.
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 1
Marvellous Logic Building Assignment : 19
Input : iRow = 4 iCol = 4
Output : * * * #
		 * * # @
		 * # @ @
		 # @ @ @ 
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
			 	if(iCnt == iCnt1)
			 	{						  //mg cheak kr number.
					printf("#\t");		
				}
				else if(iCnt > iCnt1)
				{
					printf("@\t");
				}
				else
				{
					printf("*\t" );
				}
		}
		printf("\n");
	}
}