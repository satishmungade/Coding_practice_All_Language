/*2. Write a program which accept range from user and display all even numbers in
between that range.
Input : 23 35
Piyush Khairnar - 7588945488 आ"ी Technical सं&ार करतो !!! ©Marvellous Infosystems Page 1
Marvellous Logic Building Assignment : 11
Output : 24 26 28 30 32 34
Input : 10 18
Output : 10 12 14 16 18
Input : 10 10
Output : 10
Input : -10 2
Output : -10 -8 -6 -4 -2 0 2*/

#include<stdio.h>
void EvanRange(int ,int);
int main()
{
	int iNo,iNo1;
	printf("Enter a  Number1 :");
	scanf("%d",&iNo);
	printf("\n Enter a  Number2 :");
	scanf("%d",&iNo1);
	EvanRange(iNo,iNo1);
	return 0;

}
void EvanRange(int iNo,int iNo1)
{
	int iCounter =iNo;
	if(iNo < 0 && iNo1 < 0)  //Negetive value al tr handle
	{
		iNo = -iNo;
		iNo1 = -iNo1;
	}

	if (iNo > iNo1)
	{
		printf("\n !! Invalid choice !!");
		return;
	}
	for(iCounter = iNo; iCounter <= iNo1 ;iCounter ++)
	{
		if(iCounter % 2== 0)
		{
			printf("%d\t",iCounter);
		}	
	}	
}