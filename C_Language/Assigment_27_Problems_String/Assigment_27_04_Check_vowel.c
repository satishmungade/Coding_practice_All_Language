#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckVowel( char Str[]);
int main()
{
 	char chStr[]={};
 	BOOL bRet=FALSE;

 	printf("Enter a String check vowel or not :");
 	scanf("%[^'\n']s",chStr);
 	
 	bRet=CheckVowel(chStr);
 	if(bRet == TRUE)
 	{
 		printf("It is vowel ");
 	}
 	else 
 	{
 		printf("It is Not vowel");
 	}

 	return 0;
}
BOOL CheckVowel( char chStr[])
{
	int iCnt=0;
	  if(chStr == NULL)
    {
        return -1;
    }
	while(chStr[iCnt] !='\0')
	{
		if (chStr[iCnt] == 'a' || chStr[iCnt] == 'e' || chStr[iCnt] == 'i' || chStr[iCnt] == 'o' || chStr[iCnt] == 'u' ||
			chStr[iCnt] == 'A' || chStr[iCnt] == 'E' || chStr[iCnt] == 'I' || chStr[iCnt] == 'O' || chStr[iCnt] == 'U')
		{
			return TRUE;
	
		}
		iCnt++;
		
	}
	return FALSE;
}	
while(Str[iCnt ]!= '\0')
{
	
		if( Str[iCnt] >='A' && Str[iCnt] <= 'Z')||( Str[iCnt] >='a' && Str[iCnt] <= 'z')
		{
			if(ch == Str[iCnt])
			iCnt1 ++;
		}
		
		
		iCnt ++;
}
return iCnt1
}