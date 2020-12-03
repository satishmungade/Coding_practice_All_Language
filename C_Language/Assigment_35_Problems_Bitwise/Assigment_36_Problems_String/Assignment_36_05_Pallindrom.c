#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL StrPallindrome(char *);
int main()
{
	char Src[50];
	BOOL bRet=FALSE;
	printf("\nEnter A source String :");
	scanf("%[^'\n']s",Src);
	bRet=StrPallindrome(Src);
	if(bRet == TRUE)
	{
		printf("\nString is Palindrom :");
	}
	else
	{
		printf("\nString Are Not Palindrom");
	}
	return 0;
}

BOOL StrPallindrome(char *Src)
{
	int iStart=0,iEnd=0;
	if(Src == NULL)
	{
		return -1;
	}
	while(Src[iEnd] !='\0') 
	{
		iEnd ++;
	}
	iEnd --;
	while(iStart <= iEnd)
	{
		if(Src[iStart] != Src[iEnd])
			break;
		iStart ++;
		iEnd --;
	}
	if(iStart >= iEnd)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	

}	
