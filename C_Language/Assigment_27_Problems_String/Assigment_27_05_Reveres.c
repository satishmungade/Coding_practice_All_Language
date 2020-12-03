#include<stdio.h>
void Reveres(char Str[] );
int main()
{
	char Str[]={};
	printf("Enter a String :");
	scanf("%[^'\n']s",Str);
	Reveres(Str);
	
	return 0;
}
void Reveres(char Str[])
{
	int iLenth=0,iCnt=0;
	while(Str[iLenth] !='\0')
	{
		iLenth ++;
	}
	for(iCnt = iLenth -1; Str[iCnt]!='\0'; iCnt --)
	{
		printf("%c",Str[iCnt]);		
	}
}