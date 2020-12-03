#include<stdio.h>
int CheckChar(char *Str,char ch);
int main()
{
	char ch='\0',Str[60];
	int iRet=0;
	printf("\n Enter A String :");
	scanf("%[^'\n']s",Str);

	printf("\n Enter A Character for count :");
	scanf(" %c",&ch); 

	iRet= CheckChar(Str,ch);
	printf("\n Character found Count is :%d",iRet);
	
	return 0;
}


int CheckChar(char *Str,char ch)
{
	int iCount=0;
	
	while(*Str != '\0')   //Pointer Approch
	{
		if(*Str == ch)
		{
			iCount ++;
		}		
		Str++;
	}
	return iCount;
}	 