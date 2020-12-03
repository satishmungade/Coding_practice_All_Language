#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL StrCmp(char *,char *);
int main()
{
	char Src[50] ,Dest[50];
	BOOL bRet=FALSE;
	printf("\nEnter A source String :");
	scanf("%[^'\n']s",Src);
	printf("\nEnter A Destination String :");
	scanf(" %[^'\n']s",Dest);
	bRet=StrCmp(Src,Dest);
	if(bRet == TRUE)
	{
		printf("\n Both String is Equal :");
	}
	else
	{
		printf("\n Both String Are Not Equal");
	}
	return 0;
}

BOOL StrCmp(char *Src,char *Dest)
{
	if(Src == NULL && Dest == NULL)
	{
		printf("Error : ");
	}
	while((*Src !='\0') && (*Dest !='\0'))
	{
		if(*Src == *Dest)
			Src++;
		Dest ++;
	}
	if(*Src == *Dest)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}	