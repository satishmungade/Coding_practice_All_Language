#include<stdio.h>
int CountSmall(char Str[] );
int main()
{
	char chStr[]={};
	int iRet=0;
	printf("Enter a String :");
	scanf("%s",chStr);
	iRet=CountSmall(chStr);
	printf("Count of Small letter is :%d",iRet);

	return 0;
}
int CountSmall(char Str[])
{
	int iCnt=0,iCount=0;
	while(Str[iCnt] !='\0')
	{
		if( 'a' <= Str[iCnt] && 'z' >= Str[iCnt])
		{	
			iCount ++;
		}	
		iCnt ++;
	}
	return iCount;
}