#include<stdlib.h>
#include<stdlib.h>
int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	printf("Enter Two Number :");
	scanf("%d%d",&iNo1,&iNo2);

	iAns = iNo1 % iNo2;
	printf("\n Division is :%d",iAns);

	exit(0);
}