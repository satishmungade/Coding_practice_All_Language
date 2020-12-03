#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;
BOOL Splsy(char ch);
int main()
{
	char Chchar='\0';
	BOOL bRet=FALSE;
	printf("Enter a Character :");
	scanf("%c",&Chchar);
	bRet=Splsy(Chchar);
	if(bRet == 1)
	{
		printf("Its special Character");	
	}
	else
	{
		printf("Its NOT special Character");
	}
	return 0;
}
BOOL Splsy(char chChar)
{
	int iCnt=chChar;
	if ((chChar >=33) && (chChar <=47) || (chChar=='@'))
		return TRUE;
	else 
		return FALSE; 

	/*for(iCnt =33; iCnt <= 47 ; iCnt ++)
	{
		if(chChar == iCnt || chChar == 64)
			return TRUE;
		
	} 
	return FALSE; */
}	