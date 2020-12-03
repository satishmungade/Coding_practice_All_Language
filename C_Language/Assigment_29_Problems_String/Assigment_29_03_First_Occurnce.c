#include<stdio.h>
int FirstOccur(char Str[],char ch);
int main()
{
	char ch='\0',Str[60];
	int iRet=0;
	printf("\n Enter A String :");
	scanf("%[^'\n']s",Str);

	printf("\n Enter A Character  :");
	scanf(" %c",&ch); 

	iRet= FirstOccur(Str,ch);
	printf("\n Character found At Position is :%d",iRet);
	
	return 0;
}


int FirstOccur(char Str[],char ch)
{
	int iCnt =0, iCount=0;
	if(Str == NULL || ch=='\0')
	{
		return -1;
	}

	while(Str[iCnt] != '\0')
	{
		if (Str[iCnt] == ch)
		{
			break;
		}
		iCnt ++ ;
		
	} 
	/*if(iCnt == Str[iCnt]) //hear both travle karun equal yeail char
	{
		return -1; //nahi sapdal
	}
		return iCnt; */

	if(Str[iCnt]==ch) //char sapal tr tyach index
	{
		return iCnt;
	}
	else
	{
		return -1;
	}

}	 