#include<stdio.h>
int CountCapital(char Str[] );
int main()
{
	char Str[]={};
	int iRet=0;
	printf("Enter a String :");
	scanf("%[^'\n']s",Str);
	iRet=CountCapital(Str);
	printf("Count of Capital letter is :%d",iRet);

	return 0;
}
int CountCapital(char Str[])
{
	int iCnt=0,iCount=0;
	while(Str[iCnt] !='\0')
	{	
		if( 'A' <= Str[iCnt] && 'Z' >= Str[iCnt])
		{	
			iCount ++;
		}	
		iCnt ++;

	}	
	return iCount;
}