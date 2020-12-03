#include<stdio.h>
float IncomeTax(int );
int main()
{
	int iAmount=0;
	float fTax= 0.0;
	
	printf("\n\tEnter Your Amount plase :");
	scanf("%d",&iAmount);
	fTax=IncomeTax(iAmount);
	printf("\n\tYour Tax is  :%fRs",fTax);

	return 0;	

}

float IncomeTax(int iAmount)
{
	int iRet=0;
	
	if(iAmount <=500000)
	{
		
		return 0;
	}
	else if( iAmount >= 500000 &&  iAmount <= 100000  )
	{
			    	
		 return iRet= iAmount /1.0f;
		
	}
	else if(iAmount >= 100000 && iAmount <= 200000 )
	{	
			
			 return iRet=iAmount *2 /10.0f;
			 
	}
	else
	{
		 return iRet =iAmount *3/10.0f;
		 

	} 
	
}	