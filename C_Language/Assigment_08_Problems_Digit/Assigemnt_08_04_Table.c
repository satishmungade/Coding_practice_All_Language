/*4.Write a program which accept number from user and display its table.
Input : 2
Output : 2 4 6 8 10 12 14 16 18 20
Input : 5
Output : 5 10 15 20 25 30 35 40 45 50
Input : -5
Output : 5 10 15 20 25 30 35 40 45 50 */


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
			printf("%d\t",iNo);
			iNo=iNo + iNo1;
			
		}	
}