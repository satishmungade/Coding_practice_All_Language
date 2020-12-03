#include<stdio.h>
void RevTog(char *Str);
int main()
{
	char Str[30];
	printf("\nEnter a String :");
	scanf("%[^'\n']s",Str);
	RevTog(Str);
	printf("\nYour String is :%s",Str);
	return 0;
}
void RevTog(char *Str)
{
	if(Str == NULL)
	{
		return;
	}
	char Temp;
	char *First,*Last;
	First=Str;
	Last=Str;
	while(*Last !='\0')
	{
		Last ++;
	}
	Last --;
	while(First <= Last)
	{
		Temp = *First; 
		*First= *Last;
		*Last= Temp;

		First ++;
		Last --;
	
	}
	while(*First !='0')
	{	
		if((*First >='a' && *First <='z') && (*First >='A' && *First <='Z'))
		{	*First=*First-32;
			*First=*First+32;
		}
		First ++;
	}	
	*First;
}