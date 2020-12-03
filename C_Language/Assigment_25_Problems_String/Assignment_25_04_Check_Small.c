#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;
BOOL CheSmall(char ch);
int main()
{
	char Chchar='\0';
	BOOL bRet=FALSE;
	printf("Enter a Character :");
	scanf("%c",&Chchar);
	bRet=CheSmall(Chchar);
	if(bRet == 1)
	{
		printf("Its Small Letar");	
	}
	else
	{
		printf("Its NOT Small Letar");
	}
	return 0;
}
BOOL CheSmall(char chChar)
{
	int iCnt;
	/*for(iCnt =97; iCnt <= 122 ; iCnt ++)
	{
		if(chChar == iCnt)
			return TRUE;
		else
			return FALSE;
	} /*
	/*if ((chChar >= 97) && (chChar <= 122)) //kadi ascii code number use karu nay so
	
			return TRUE;
		else
			return FALSE; */
	
	if ((chChar >= 'a') && (chChar <= 'z'))
		
			return TRUE;
		else
			return FALSE;
}