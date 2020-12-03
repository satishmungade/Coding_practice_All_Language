#include<stdio.h>
void CopyN(char Src[],char Dest[],int iNo)
{
	int iCnt=0;
	while(Src[iCnt]!='\0')
	{ 
		Dest[iCnt]=Src[iCnt];
		iCnt ++;      
		if(iCnt == iNo)
			break;
	}
	Dest[iCnt]='\0';
	*Dest;
}
int main()
{
	char Src[30],Dest[30];
	int iNo=0;
	printf("\nEnter A Your String :");
	scanf("%[^'\n']s",Src);
	printf("\nEnter a No That Till Copy :");
	scanf(" %d",&iNo);
	CopyN(Src,Dest,iNo);
	printf("\nCopy Destination String :%s",Dest);
	return 0;
}