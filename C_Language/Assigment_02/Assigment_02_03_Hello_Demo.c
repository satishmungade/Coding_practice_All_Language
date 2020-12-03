/*3. Accept on number from user if number is less than 10 then print Helloù otherwise print  demo*/
#include<stdio.h>
void Display(int iNo);
int main()
{
	int iValue =0;
	printf("Enter a Number ");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}
void Display(int iNo)
{
	if(iNo < 10)
	{
		printf(" Hello ");
	}
	else
	{
		printf(" Demo ");
	}

}
