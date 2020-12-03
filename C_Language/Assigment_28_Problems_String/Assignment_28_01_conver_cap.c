#include<stdio.h>
void Display(char Str[])
{
	int iCnt=0;
	while(Str[iCnt] !='\0')
	{
		if(Str[iCnt] >= 'A' && Str[iCnt] <='Z')
		{
			Str[iCnt]=Str[iCnt]+32;
		}
		iCnt ++;
	}
	printf("\n%s",Str);

}
int main()
{
	char Str[30];
	printf("Enter A string ");
	scanf("%[^'\n']s",Str);
	Display(Str);

	return 0;

}
