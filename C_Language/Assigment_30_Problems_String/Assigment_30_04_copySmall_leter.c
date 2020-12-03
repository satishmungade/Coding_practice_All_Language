#include<stdio.h>
void CopyCapital(char Src[],char Dest[])
{
	int iCnt=0,iCnt1=0;
	while(*Src !='\0')
	{ 
		if((*Src >='a') && (*Src<= 'z'))  //pOINTER
		{
			*Dest=*Src;
			Dest++;
		}
		Src++;	      
	} 
	*dest='\0';
	/*while(Src[iCnt] !='\0')
	{ 
		if((Src[iCnt] >='a') && (Src[iCnt]<= 'z'))    //ARRAY
		{
			Dest[iCnt1]=Src[iCnt];
			iCnt1++;
		}
		iCnt ++;	      
	} 
	Dest[iCnt]='\0'; */ 
	*Dest;
}
int main()
{
	char Src[30],Dest[30];
	int iNo=0;
	printf("\nEnter A Your String :");
	scanf("%[^'\n']s",Src);
	CopyCapital(Src,Dest);
	printf("\nCopy the Capital Letar String :%s",Dest);
	return 0;
}