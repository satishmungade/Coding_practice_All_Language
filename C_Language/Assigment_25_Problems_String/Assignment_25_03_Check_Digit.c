#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;
BOOL CheDigit(char ch);
int main()
{
	char Chchar='\0';
	BOOL bRet=FALSE;
	printf("Enter a Only single digit Character :");
	scanf("%c",&Chchar);
	bRet=CheDigit(Chchar);
	if(bRet == 1)
	{
		printf("Its Digit");	
	}
	else
	{
		printf("Its NOT Digit");
	}
	return 0;
}
BOOL CheDigit(char chChar)
{
	int iCnt;

	if((chChar >='0' )&& (chChar <= '9'))  //Dont use so much accivalue
		return TRUE;
	else 
		return FALSE;

	/*for(iCnt =49; iCnt != 57 ; iCnt ++) //looping use karachi garaj nhi.
	{
		if(chChar == iCnt)
			return TRUE;
		
	}
			return FALSE; */
}