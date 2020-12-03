/*3. Write a program which accept distance in kilometre and convert it into meter. (1
kilometre = 1000 Meter)
Input : 5
Output : 5000
Input : 12
Output : 12000 */

#include<stdio.h>
int KMtoMeter(int );
int main()
{
	int iValue = 0,iRet=0;

	printf("Enter KM Distance :");
	scanf("%d",&iValue);

	iRet=KMtoMeter(iValue);
	printf("Your Meter Distance is %d:",iRet);
	
	return 0;	
}
int KMtoMeter(int iKM)
{
	if(iKM < 0)
	{
		iKM = -iKM;
	}
	int iAns;
	 return iAns=iKM *1000;
}