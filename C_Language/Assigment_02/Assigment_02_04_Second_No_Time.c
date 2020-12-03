/*4. Accept two numbers from user and display first number in second
number of times.*/
#include<stdio.h>
void display(int ,int);
int main()
{
	int iValue = 0;
	int iCount = 0 ;
	printf("Enter a Number :");
	scanf("%d",&iValue);
	printf("Enter a Frequency :");
	scanf("%d",&iCount);
	display(iValue,iCount);
	return 0;

}
void display(int iNo,int iFrequency)
{
	int iCounter=0;
	for (iCounter =1; iCounter <= iFrequency ;iCounter ++)
	{
		printf("%d\t",iNo);
	
	}
}	