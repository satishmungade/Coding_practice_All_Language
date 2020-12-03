#include<stdio.h>
int SchoolFees(int iChoice);
int main()
{
	int iStandard=0,iRet=0;
	printf("\n Enter your student standard :");
	scanf("%d",&iStandard);
	iRet=SchoolFees(iStandard);
	printf("Your Fees is %d",iRet);

	return 0;

}
int SchoolFees(int iStandard)
{
	if( 4 < iStandard)
	{
		printf("Wrong input");
		return 0;
	}
	if(iStandard == 1)
	{
		return 8900;
	}
	if(iStandard == 2)
	{
		return 12790;
	}
	if(iStandard == 3)
	{
		return 21000;
	}
	if(iStandard == 4)
	{
		return 23450;
	}
}