#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL ;
BOOL ChAlpha(char ch);
int main()
{
	char Chchar='\0';
	BOOL bRet=FALSE;
	printf("Enter a Character :");
	scanf("%c",&Chchar);
	bRet=ChAlpha(Chchar);
	if(bRet == 1)
	{
		printf("Its Character");	
	}
	else
	{
		printf("Its NOT Character");
	}
	return 0;
}
BOOL ChAlpha(char chChar)
{
	int iCnt=chChar;

	if ((chChar >= 'a') && (chChar <= 'z') || (chChar >= 'A') && (chChar <= 'Z'))
		
			return TRUE;
		else
			return FALSE;

	/*for(iCnt =65; iCnt <= 90 ; iCnt ++) //ahe ki nhi hai dakhyvala asel tr condition dedun kar
	{
		if(chChar == iCnt)
			return TRUE;
		
	}
	for(iCnt =97; iCnt <= 122 ; iCnt ++)
	{
		if(chChar == iCnt)
			return TRUE;
			
	}
	return FALSE; */
}	