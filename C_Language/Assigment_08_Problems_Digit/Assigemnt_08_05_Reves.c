/*5. Write a program which accept number from user and display its table in reverse
order.
Input : 2
Output : 20 18 16 14 12 10 8 6 4 2
Input : 5
Output : 50 45 40 35 30 25 20 15 10 5
Input : -5
Output : 50 45 40 35 30 25 20 15 10 5 */


#include<stdio.h>
void Table(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	Table(iNo);
	return 0;

}
void Table(int iNo)
{
	int iCounter =1;
	if(iNo < 0 )
		iNo =  -iNo;

	int iNo1=iNo;
	for (iCounter =0 ;iCounter < 10 ; ++ iCounter )
	{
		 iNo=iNo + iNo1;
	}	
	for (iCounter = 10  ;iCounter > 0 ; -- iCounter  )  
	{
			
		iNo=iNo - iNo1;
		printf("%d\t",iNo);
	}
}