#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0

long ConvertBinary(int iNo)
{
	int iRem=0,i=1;
	long long binary =0;

	while(iNo !=0)
	{
		iRem=iNo % 2;
		iNo=iNo/2;
		binary =binary + iRem * i;
		i =i*10;
	}
	//printf("%d",binary);
	return binary;
}
BOOL continewThree1(long binary)
{
 	 int count=0;
	while(binary != 0)
	{
		binary =(binary & (binary << 1));
		count ++;
	}
	if(count <= 3)
 	    return TRUE;
 	else 
	 	return FALSE;   
	//printf("\n%d",count);
			
}
	
int main()
{
	int iNo=0;
	long Ans=0;
	BOOL bRet=FALSE;
	printf("\n Enter a decimal number :");
	scanf("%d",&iNo);
	Ans=ConvertBinary(iNo);
	printf("%d",Ans);
	
	bRet=continewThree1(Ans);
	if(bRet == 1)
	    printf("\n Continew 3 one present");
	else
		printf("\n Not pareset continew 3");
	return 0;
}
