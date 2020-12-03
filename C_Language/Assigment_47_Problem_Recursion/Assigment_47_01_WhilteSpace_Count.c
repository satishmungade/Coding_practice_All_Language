#include<stdio.h>
int WhiteSpace(char *);
int main()
{
    char Str[30];
	int iRet=0;
	printf("Enter Your String :");
	scanf("%[^'\n']s",Str);
	iRet=WhiteSpace(Str);
	printf("\n Total White Space in String :%d",iRet);
	return 0;

}
int WhiteSpace(char *Str)
{
	/*int iCnt=0;
	if(Str==NULL)
	{
		return -1;
	}
	while(*Str !='\0')
	{
		if(*Str ==' ')  //without recurtion 
		{
			iCnt ++;
		}
		*Str ++;
	}
	return iCnt; */
	static  int iCnt=0;
	if(*Str != '\0')
	{ 
		if(*Str ==' ')  //with Recurtion
		{
			iCnt ++;
		}
		WhiteSpace(Str + 1);

	}
	return iCnt;



}