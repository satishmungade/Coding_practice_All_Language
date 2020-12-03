/*2. Accept amount in US dollar and return its corresponding value in Indian currency.
Consider 1$ as 70 rupees.
Input : 10
Output : 700
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 1
Marvellous Logic Building Assignment : 12
Input : 3
Output : 270
Input : 1200
Output : 84000*/

#include<stdio.h>
int DollarToINR(int);
int main()
{
	int iValue=0,iRet=0;
	printf("Enter a Number :");
	scanf("%d",&iValue);
	iRet=DollarToINR(iValue);
	printf("Value in INR %d",iRet);
	return 0;

}
int DollarToINR(int iNo)
{
	int iAns;
	iAns = iNo *70;
	return iAns;
}
