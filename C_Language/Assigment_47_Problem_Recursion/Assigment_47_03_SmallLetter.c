#include<stdio.h>
int SmallLetter(char *);
int main()
{
	char Str[30];
	int iRet=0;
	printf("Enter a String :");
	scanf("%[^'\n']s",Str);
	iRet=SmallLetter(Str);
	printf("\n String Small Letter is : %d",iRet);
	return 0;
}
int SmallLetter(char *Str)
{
	if(Str== NULL)
	{
		return-1;
	}
	static int iCnt=0;
	if(*Str !='\0')
	{
		if(*Str >= 'a' && *Str <= 'z')
		{
			iCnt ++;
		}
		SmallLetter(Str + 1);
	}
	return iCnt;
}