#include<stdio.h>
int Revers(int);
int main()
{
	int iNo=0,iRet=0;
	printf("Enter a Number :");
	scanf("%d",&iNo);
	iRet=Revers(iNo);
	printf("\n Revers order is :%d",iRet);

	return 0;
}
int Revers(int iNo)
{
	static int iRev=0,iDigit=0;
	/*while(iNo != 0)
	{
		
		iDigit=iNo%10;
		iNo=iNo/10;
		iRev=iRev *10+iDigit;	withoutRecursion

	}  */
	if(iNo != 0)
	{
		iDigit=iNo%10;
		iNo=iNo/10;
		iRev=iRev *10+iDigit;  //withRecursion
		Revers(iNo);
	}  
	return iRev;
}