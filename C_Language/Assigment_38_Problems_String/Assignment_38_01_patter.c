#include<stdio.h>
void Pattern(char *);
int main()
{
	char Str[30];
	printf("\n Enter a String :");
	scanf("%[^'\n']s",Str);
	Pattern(Str);
	return 0;
}
void Pattern(char *Str)
{
	int iCnt=0;
	char Temp;
	if(Str ==NULL)
	{
		return ;
	}	
	while(Str[iCnt] !='\0')
	{
		iCnt ++;
	} 
	while(iCnt !=0)
	{
		printf("\n%s",Str);
		iCnt --;

		
	}
}
