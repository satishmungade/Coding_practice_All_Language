/*5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20
*/
#include<stdio.h>
void Multiple(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	Multiple(iNo);
	return 0;

}
void Multiple(int iNo)
{
	int iCounter;
	if(iNo < 0)
	{
		iNo= -iNo;
	}
	int iNo1=iNo;
	for(iCounter = 1 ; iCounter <= 5 ;iCounter ++)
	{
		   printf("%d\t",iNo);
		    iNo=iNo +iNo1;
			
	}	
}	