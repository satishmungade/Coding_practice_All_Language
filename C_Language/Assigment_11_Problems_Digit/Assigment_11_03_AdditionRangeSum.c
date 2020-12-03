/*3. Write a program which accept range from user and return addition of all numbers
in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 212
Input : 10 18
Output : 126
Input : -10 2
Output : Invalid range
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 2
Marvellous Logic Building Assignment : 11
Input : 90 18
Output : Invalid range*/

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
	if(iNo > iNo1 || iNo < 0)
	{
		printf("!! Invalid choice !!");
		exit(0);		
	}
	else
		for(iCounter = iNo; iCounter <= iNo1 ;iCounter ++)
		{
		
			iSum=iSum +iCounter;
		}
		return iSum;
}