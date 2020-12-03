#include<stdio.h>
int LastOccur(char Str[],char ch);
int main()
{
	char Str[30],ch;
	int iRet=0;
	printf("Enter A String :");
	scanf("%[^'\n']s",Str);
	printf("\n Enter Your Charactor :");
	scanf(" %c",&ch);
	iRet=LastOccur(Str,ch);
	if(iRet == -1)
	{
		printf("\nThere Is No Such Charactor");
	}
	else
	{
		printf("Item Found Last Position is %d:",iRet);
	}
	return 0;

}
int LastOccur(char Str[],char ch)
{
	int ipos=-1, iLenth=0,iCnt=0; //ipos ka tr jar milal nhi tr -1 jaail if lihachi garaj nhi
	if(Str == NULL || ch=='\0')
	{
		return -1;
	}
	/*while(Str[iLenth] !='\0')
	{
		iLenth ++;
	}
	for(iCnt = iLenth -1; iCnt <= iLenth ; iCnt --)
	{
		if(ch == Str[iCnt])
		{
			break ;
		}
	}
	if(iLenth ==Str[iCnt])
	{
		return -1;
	}
	else
	{
		return iCnt;
	} */
	while(Str[iCnt]!='\0')
	{
		if(ch == Str[iCnt])
		{
			 ipos=iCnt;   //-1 theun puthe ka tr new theun puthe jayach last value retuen kr tyat last oc mile.
		}
		iCnt ++;
	}
	return ipos; 
}