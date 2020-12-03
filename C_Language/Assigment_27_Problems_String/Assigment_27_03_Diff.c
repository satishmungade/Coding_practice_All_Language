#include<stdio.h>
int Count(char Str[] );
int main()
{
	char chStr[]={};
	int iRet=0;
	printf("Enter a String :");
	scanf("%s",&chStr);
	iRet=Count(chStr);
	printf("Capital and Small letter Diff is :%d",iRet);

	return 0;
}
int Count(char Str[])
{
	int iCnt=0,iCap=0,iSml=0;
	while(Str[iCnt] !='\0')
	{	
		if( 'A' <= Str[iCnt] && 'Z' >= Str[iCnt])
		{	
			iCap ++;
		}
		if( 'a' <= Str[iCnt] && 'a' >= Str[iCnt])
		{	
			iSml ++;
		}	
		iCnt ++;

	}	
	return iSml - iCap;
}