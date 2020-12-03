#include<stdio.h>
void Display(char *Str)
{
	int iCnt=0;
	while(Str[iCnt] !='\0')
	{
		if((Str[iCnt] >= 'a' && Str[iCnt] <='z'))
		{
			Str[iCnt]=Str[iCnt]-32;
			
		}
		else if((Str[iCnt] >= 'A' && Str[iCnt] <='Z'))
		{
			Str[iCnt]=Str[iCnt]+32;
		}
		
		iCnt ++;
	}
	*Str;

}
int main()
{
	char Str[30];
	printf("Enter A string :");
	scanf("%[^'\n']s",Str);
	Display(Str);
	printf("\nModified String is: \t %s",Str);
	return 0;

}
