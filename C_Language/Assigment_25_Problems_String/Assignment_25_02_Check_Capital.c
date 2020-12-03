#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;
BOOL CheCapital(char ch);
int main()
{
	char Chchar='\0';
	BOOL bRet=FALSE;
	printf("Enter a Character :");
	scanf("%c",&Chchar);
	bRet=CheCapital(Chchar);
	if(bRet == 1)
	{
		printf("Its Capital");	
	}
	else
	{
		printf("Its NOT Capital");
	}
	return 0;
}
BOOL CheCapital(char chChar)
{
	int iCnt;
	/*for(iCnt =65; iCnt <= 90 ; iCnt ++)
	{
		if(chChar == iCnt)
			return TRUE;
		else
			return FALSE;
	}*/
	/*if ((chChar >= 65) && (chChar <= 90))
	
			return TRUE;
		else
			return FALSE; */
	
	if ((chChar >= 'A') && (chChar <= 'Z'))
		
			return TRUE;
		else
			return FALSE;
	
}	