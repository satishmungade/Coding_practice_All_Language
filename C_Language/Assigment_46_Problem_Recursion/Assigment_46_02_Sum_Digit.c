#include<stdio.h>
int Sum(int);
int main()
{
	static int iNo=0,iRet=0;
	printf("\n Enter a Number :");
	scanf("%d",&iNo);
	iRet=SumR(iNo);
	printf("\n Sum of Number :%d",iRet);
	return 0;
}
int SumI(int iNo)
{

	int iSum=0,iDigit=0;
	while(iNo != 0)
	{	
		//iDigit=iNo % 10;
		//iSum=iSum + iDigit;  //without recution
		iSum=iSum +(iNo % 10);
		iNo=iNo / 10;
	
	}
		return iSum;
}		
int SumR(int iNo)
{
	static int iSum=0,iDigit=0;
	
		if(iNo != 0)
		{	
			iDigit=iNo % 10;   //with recurtion
			iSum=iSum + iDigit;
			iNo=iNo / 10;	
			
	 		Sum(iNo);
	 	}

	 return iSum;
}