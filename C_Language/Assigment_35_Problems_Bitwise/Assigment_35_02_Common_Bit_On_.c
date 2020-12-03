#include<stdio.h>
typedef unsigned int UINT ;
void CommonBitOn(UINT iNo,UINT iNo1);
int main()
{
	int iNo=0,iNo1=0;
	printf("\n Enter A First Number : ");
	scanf("%d",&iNo);
	printf("\n Enter A Scound Number :");
	scanf("%d",&iNo);
	CommonBitOn(iNo,iNo1);
	return 0;
}
void CommonBitOn(UINT iNo,UINT iNo1)
{	
	int iCount=0,iCount1=0,ipos1,ipos;
	 
     iCount=~(iNo^iNo1);
   	printf("%d\t",iCount);
    
}    
