#include <stdio.h>
int WordCount(char *,int);
int main()
{
	char Str[30];
	int iRet=0,iSize=0;
	printf("\nEnter Your String :");
	scanf("%[^'\n']s",Str);
	while(Str[iSize] !='\0')
	{
		iSize ++;
	}
	iRet=WordCount(Str,iSize);
	printf("\n Total Word Count Is :%d",iRet);
	return 0;
}

int WordCount(char *Str,int iSize)
{
	int iWord=0,iCnt=0;
	if(Str == NULL)
	{
		return -1;
	}
	while(iCnt < iSize)
	{
		if(Str[iCnt] ==' ')
		{	
			while(iCnt < iSize && Str[iCnt] ==' ')
			{
				iCnt ++;
			}
			
		}
		else if(iCnt < iSize && Str[iCnt] !=' ')
		{
			iWord ++;
			
			while(iCnt < iSize && Str[iCnt] !=' ')
			{
				iCnt ++;
			}	
		}		
	}
	return iWord;
}
