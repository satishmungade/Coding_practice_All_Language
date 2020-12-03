#include<stdio.h>
int TouristBill(int iKilometer);
int main()
{
	int iKilometer=0;
	int iRet = 0.0;
	
	printf("\n\tEnter Your KiloMeter :");
	scanf("%d",&iKilometer);
	iRet=TouristBill(iKilometer);
	printf("\n\tYour Rupes :%d",iRet);

	return 0;	

}

int TouristBill(int iKilometer)
{
	int iRet=0;
	
	if(100 > iKilometer)
	{
    	return	iKilometer *25;
	
	}
	else if(iKilometer >100)
	{
		return iKilometer * 15 + 1000;
	}

}	