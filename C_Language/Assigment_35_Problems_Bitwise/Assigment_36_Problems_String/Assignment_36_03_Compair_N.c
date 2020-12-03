#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL StrCmp(char *,char *,int );
int main()
{
	char Src[50] ,Dest[50];
	BOOL bRet=FALSE;
	int iPos=0;
	printf("\nEnter A source String :");
	scanf("%[^'\n']s",Src);
	printf("\nEnter A Destination String :");
	scanf(" %[^'\n']s",Dest);
	printf("\nEnter a Position :");
	scanf("%d",&iPos);
	bRet=StrCmp(Src,Dest,iPos);
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

BOOL StrCmp(char *Src,char *Dest ,int iPos)
{
	if(Src == NULL && Dest == NULL)
	{
		printf("Error : ");
	}
	while((*Src !='\0') && (iPos !=0))
	{
		if(*Src == *Dest)
			Src++;
		Dest ++;
		if(iPos == 0)
		{
			break;
		}
		iPos --;
	}
	if(iPos == 0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}	