#include <stdio.h>
#include <stdlib.h>
#define EQUAL_TO 1
#define LESS_THAN 2
#define GREATER_THAN 4
#define LESS_THAN_EQUAL_TO 8
#define GREATER_THAN_EQUAL_TO 16
void Compare(int ,int,char * );
int main(void)
{
	char chRet;
	int iNo1;
	int iNo2;
	printf("\n Enter Two Number :");
	scanf("%d%d",&iNo1,&iNo2);
	
	Compare(iNo1,iNo2,&chRet);
	
	if(chRet & EQUAL_TO)
		printf("iNo1 And iNo2 Both Numbers is Equal\n");
	
	if(chRet & LESS_THAN )
		printf("iNo1 is Less Than iNo2\n");
	
	if(chRet & GREATER_THAN)
		printf("iNo1 is Greater Than iNo2\n");
	
	if(chRet& LESS_THAN_EQUAL_TO)
		printf("iNo1  is Lesser or  Equal To iNo2\n");
	
	if(chRet & GREATER_THAN_EQUAL_TO)
		printf("iNo is Greater or Equal to iNo2\n");

	exit(0);
}
void Compare(int ivalue1 ,int ivalue2 ,char *chPtr)
{
	 *chPtr = *chPtr ^ *chPtr ;
	
	if(ivalue1 < ivalue2)
	{	
		*chPtr = *chPtr | LESS_THAN;
		*chPtr = *chPtr | LESS_THAN_EQUAL_TO;
	}
	else if(ivalue1 > ivalue2 )
	{
		*chPtr = *chPtr | GREATER_THAN;
		*chPtr = *chPtr | GREATER_THAN_EQUAL_TO;
	}
	else          
	{
		*chPtr  = *chPtr | EQUAL_TO;
		*chPtr  = *chPtr | LESS_THAN_EQUAL_TO;
		*chPtr = *chPtr | GREATER_THAN_EQUAL_TO;
	}	
	
	
}
