#include<stdio.h>
int Product(int);
int main()
{
	int iNo=0,iAns=0;
	printf("\nEnter a Number :");
	scanf("%d",&iNo);
	iAns=Product(iNo);
	 printf("Product of Given Number is:%d",iAns);
	return 0;
}
int Product(int iNo)
{
	static int iDigit=0,iMult=1;
	/*while(iNo !=0)
	{
		iDigit=iNo %10;
		iMult=iMult * iDigit;
		iNo =iNo /10;
	}*/
		if(iNo != 0)
		{	
			iDigit=iNo %10;
			iMult=iMult * iDigit;
			iNo =iNo /10;
			Product(iNo);
		}	
	return iMult;
}