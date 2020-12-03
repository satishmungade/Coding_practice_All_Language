#include<stdio.h>
void StrCap(char *);
int main()
{
	char Str[30];
	printf("Enter A String :");
	scanf("%[^'\n']s",Str);
	StrCap(Str);
	printf("\n Your String is Modified:%s",Str);
	return 0;
}
void StrCap(char *Str)
{
	int iCnt =1;
	if(Str == NULL)
	{
		return;
	}
	while(*Str !='\0')
	{
			
		if(iCnt ==1 && *Str >='a' && *Str <='z')
		{
			*Str=*Str-32;
		}
		iCnt++;
		if(*Str ==' ')
		{
			iCnt=1;
		}					
		Str ++;
	}
	*Str='\0';

}