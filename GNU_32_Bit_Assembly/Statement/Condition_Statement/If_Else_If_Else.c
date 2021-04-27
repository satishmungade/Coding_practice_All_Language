#include<stdlib.h>
#include <stdio.h>
int main(void)
{
	int iNo;
	printf("Enter a Number :");
	scanf("%d",&iNo);
	if(iNo < 2)
		printf("Number is Less 2\n");
	else if(iNo > 2)
		printf("Number is Grater 2\n");
	else
		printf("Number is Equal 2");
	
	exit(0);
}