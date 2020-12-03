#include <stdio.h>
int LargeWord(char *);
int main()
{
	char Str[30];
	int iRet=0;
	printf("\nEnter Your String :");
	scanf("%[^'\n']s",Str);
	iRet=LargeWord(Str);
	printf("\n Large-Word Is :%d",iRet);
	return 0;
}
int LargeWord(char *Str)
{
	int iMax=0,iCnt=0;
	if(Str == NULL)
	{
		return -1;
	}
	while (*Str !='\0')
	{
		if(*Str ==' ') 
		{
			while((*Str ==' ') && (*Str !='\0'))
			{
				Str ++;	
			}
			

		}
		else 
		{
			if(*Str !=' ')
			{
				iCnt ++;
				Str ++;

			}
		}		
		Str ++;

		if( iCnt > iMax)
		{
			iMax=iCnt;
		}
		iCnt=0;
	}
	return iMax;
	
}