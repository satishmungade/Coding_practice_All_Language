#include<stdio.h>
int LengthI(char *Str);
int LengthR(char *Str);
int main()
{
	char Str[10];
	int iRet=0;
	printf("\n Enter a String :");
	scanf("%[^'\n']s",Str);
	iRet=LengthR(Str);
	printf("\n Lenth of String :%d",iRet);
	return 0;

}
int LengthR(char *Str)
{
	static int iCnt=0;
	if(*Str !='\0')
	{	
		iCnt ++;          
		LengthR(Str+1);   	//withRecursion
	}
	return  iCnt;

	
}
int LengthI(char *Str)
{
	int iCnt=0;
	while(*Str !='\0')
	{
		iCnt ++;
		*Str ++;   //Without Recursion
	}
	return iCnt; 
}	