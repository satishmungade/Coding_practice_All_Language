#include<stdio.h>
void Pattern(char *);
int main()
{
	char Str[30];
	printf("\n Enter a String :");
	scanf("%[^'\n']s",Str);
	Pattern(Str);
	return 0;
}
void Pattern(char *Str)
{
	int iCnt=0,iRow,iCol;
	char *Temp;
	Temp=Str;
	if(Str ==NULL)
	{
		return ;
	}	
	while(Str[iCnt] !='\0')
	{
		iCnt ++;
	} 
	/*while(iCnt !=0)
	{
		printf("\n%s",Str);
		iCnt --;

	} */
	for(iRow =0 ;iCnt !=0 ; iRow ++)
	{
		for(iCol=0;iCnt !=0 ; iCol ++)
		{
			printf("\n%s",Str );
		}
	}
	*Str='\0';
}
