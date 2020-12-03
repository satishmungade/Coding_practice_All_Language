#include<stdio.h>
float CalCulateBil(int );
int main()
{
	int iAmount=0;
	float fDiscount = 0.0;
	printf ("\n\t1. if Your Bill Amount is 500 then there is no discount. \n\t2. if bill amount is less than 1500 and more than 500 they give 10%% discount.\n\t3.if the bill amount is more than 1500 then they give 15%% discount. \n");
	printf("\n\tEnter Your Amount plase :");
	scanf("%d",&iAmount);
	fDiscount=CalCulateBil(iAmount);
	printf("\n\tYour Bill is with Add Discount :%fRs",fDiscount);

	return 0;	

}

float CalCulateBil(int iAmount)
{
	int iRet=0.0;
	
	if(iAmount < 500)
	{
		
		return iAmount;
	}
	if(iAmount <= 1499  )
	{
		
		 iRet= iAmount *10 /100;
		 return iAmount -iRet;
	}
	else if(iAmount >= 1500 )
	{	
			
			 iRet=iAmount *15 /100;
			 return iAmount-iRet;
	}
	
}	