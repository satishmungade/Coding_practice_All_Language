#include<stdio.h>
int CountWhiteSpace(char *Str)
{
	int iCount=0;
	while(*Str !='\0')
	{
		if(*Str==32)
		{
			iCount ++;
		}
		Str ++;
	}
	return iCount;
}
int main()
{
	char Str[20];
	int iRet=0;
	printf("Enter Your String :");
	scanf("%[^'\n']s",Str);
	iRet=CountWhiteSpace(Str);
	printf("Count of White Space :%d",iRet);

	return 0;
}