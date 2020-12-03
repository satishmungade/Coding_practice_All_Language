#include<stdio.h>
float Percentage (int iValue,int iValue1);
int main()
{
	int iValue=0,iValue1=0;
	float fRet =0;

	printf("Enter Your Total Marks :");
	scanf("%d",&iValue);
	printf(" \n Enter Your Obtained Marks :");
	scanf("%d",&iValue1);

	fRet=Percentage (iValue, iValue1);
	printf("\n Your Percentage is :%f",fRet);

	return 0;


}

float Percentage (int iValue,int iValue1)
{
	float fAns;
	if(iValue ==0 || iValue1 ==0)
	{
		return 0;
	}

	
	fAns =(iValue1*100)/iValue;
	
	return fAns;

}