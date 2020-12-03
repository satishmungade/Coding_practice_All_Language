#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckVowel( char);
int main()
{
 	char chChar='\0';
 	BOOL bRet=FALSE;

 	printf("Enter a char check vowel or not :");
 	scanf("%c",&chChar);
 	
 	bRet=CheckVowel(chChar);
 	if(bRet == TRUE)
 	{
 		printf("It is vowel ");
 	}
 	else 
 	{
 		printf("It is Not vowel");
 	}
}
BOOL CheckVowel( char chChar )
{
	
	if (chChar == 'a' || chChar == 'e' || chChar == 'i' || chChar == 'o' || chChar == 'u' ||
		chChar == 'A' || chChar == 'E' || chChar == 'I' || chChar == 'O' || chChar == 'U')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
