/*1. Write a program which accept string from user and copy that
characters of that string into another string in reverse order.
Input : “Marvellous Python”
Output : “nohtyP suollevraM” */

#include<stdio.h>
void CopyReversOrder(char *,char *);
int main()
{
	char Src[30],Dest[30];
	printf("Enter A your String :");
	scanf("%[^'\n']s",Src);
	CopyReversOrder(Src,Dest);
	printf("\nRevers Order Display :%s",Dest);

	return 0;
	
}
void CopyReversOrder(char *Src,char *Dest)
{
	int iStart=0,iEnd=0;
	char Temp='\0';
	if((Src == NULL) || (Dest == NULL))
    {
        return;
    }
	while(Src[iEnd] !='\0')
	{
		iEnd ++;
	}
	iEnd --; //ka tr zero la ghela mg ekda mag ye
	while(iStart < iEnd)
	{
		Temp = Src[iStart]; //swaping logic
		Src[iStart]= Src[iEnd];           //Pahila revers kel Src mathe mg tya revers copy kel 
		Src[iEnd]= Temp;

		iStart ++;
		iEnd --;
	}
	while(*Src!='\0')
	{
		*Dest=*Src;
		Src++;
		Dest ++;
	}
	*Dest='\0';
	*Dest;
	
}