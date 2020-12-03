#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckChar(char *Str,char ch);
int main()
{
	char ch='\0',Str[60];
	BOOL bRet=FALSE;
	printf("\n Enter A String :");
	scanf("%[^'\n']s",Str);

	printf("\n Enter A Character for count :");
	scanf(" %c",&ch); 

	bRet= CheckChar(Str,ch);
	if(bRet == TRUE)
		printf(" \n Character found in String");
	else
		printf("\n Character Not found in String ");

	return 0;
}


BOOL CheckChar(char *Str,char ch)
{
	
	while(*Str != '\0')   
	{
		if(ch == *Str)
		{
			return TRUE;
		}		
		Str++;
	}
	return FALSE;

}