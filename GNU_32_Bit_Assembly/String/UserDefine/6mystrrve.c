#include<stdio.h>

char* mystrrev(char *string);

int main()
{
   char string[20];
   
   printf("\n\nEnter the String :");
   gets(string);

   mystrrev(string);
  
   printf("\n\n Reverse String Is:");
   puts(string);

   return 0;
}
char* mystrrev(char *string)
{
	int iStart=0,iEnd=0;
	char Temp='\0';

	while(string[iEnd] !='\0')
	{
		iEnd ++;
	}
	iEnd --; 
	while(iStart < iEnd)
	{
		Temp = string[iStart]; 
		string[iStart]= string[iEnd];
		string[iEnd]= Temp;

		iStart ++;
		iEnd --;
	}
	return string;
} 