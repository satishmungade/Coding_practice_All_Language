/*4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range */


#include<stdio.h>
#include <stdlib.h>    
int RangeSum(int ,int);
int main()
{
	int iNo,iNo1,iSum;
	printf("Enter a  Number1 :");
	scanf("%d",&iNo);
	printf("\n Enter a  Number2 :");
	scanf("%d",&iNo1);
	iSum=RangeSum(iNo,iNo1);
	printf("\n Addition off RangeSum :%d",iSum);
	return 0;

}
int RangeSum(int iNo,int iNo1)
{
	int iCounter =iNo,iSum=0;
	if(iNo > iNo1 || iNo < 0) //negetive value not accept
	{
		printf("\n !! Invalid choice !!"); //or first value small al tri.
		exit(0) ;
	}
	else
		for(iCounter = iNo; iCounter <= iNo1 ;iCounter ++)
		{
			if(iCounter % 2 ==0)
			{	
				iSum=iSum +iCounter;
			}
		}
		return iSum;
}