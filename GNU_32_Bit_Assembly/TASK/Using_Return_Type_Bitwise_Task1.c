#include <stdio.h>
#include <stdlib.h>
#define EQUAL_TO 1
#define LESS_THAN 2
#define GREATER_THAN 4
#define LESS_THAN_EQUAL_TO 8
#define GREATER_THAN_EQUAL_TO 16
char Compare(int ,int );
int main(void)
{
	char chRet=chRet ^ chRet;
	int iNo1;
	int iNo2;
	printf("\n Enter Two Number :");
	scanf("%d%d",&iNo1,&iNo2);
	
	chRet=Compare(iNo1,iNo2);
	
	if(chRet & EQUAL_TO)
		printf("iNo1 And iNo2 Both Numbers is Equal\n");
	
	if(chRet & LESS_THAN )
		printf("iNo1 is Less Than iNo2\n");
	
	if(chRet & GREATER_THAN)
		printf("iNo1 is Greater Than iNo2\n");
	
	if(chRet & LESS_THAN_EQUAL_TO)
		printf("iNo1  is Lesser or  Equal To iNo2\n");
	
	if(chRet & GREATER_THAN_EQUAL_TO)
		printf("iNo is Greater or Equal to iNo2\n");

	exit(0);
}
char Compare(int ivalue1 ,int ivalue2 )
{
	char chChar=chChar ^ chChar ;
	if(ivalue1 < ivalue2)
	{	
		chChar = chChar | LESS_THAN;
		chChar = chChar | LESS_THAN_EQUAL_TO;
	}
	else if(ivalue1 > ivalue2 )
	{
		chChar = chChar | GREATER_THAN;
		chChar = chChar | GREATER_THAN_EQUAL_TO;
	}
	else 
	{
		chChar = chChar | EQUAL_TO;
		chChar = chChar | LESS_THAN_EQUAL_TO;
		chChar = chChar | GREATER_THAN_EQUAL_TO;
	}	
	
	return chChar;
}
