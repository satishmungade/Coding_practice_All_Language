
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
	int iCnt=0,iCnt1=0,iTable=iTable =2;
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
		for(iCnt1 = 1; iCnt1 <= iCol ; iCnt1 ++  ) 
		{

			if(iCnt % 2 == 1 ) 
			{   //if(iCnt  % 2==0)
					printf("%d\t",iCnt1 + 2  );
			} 

			
			if(iCnt % 2== 0)
			{	
				
				 	printf("%d\t",iCnt1 +2  );
			}
	

		}
		
		printf("\n");
	}
}
