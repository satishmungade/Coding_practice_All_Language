/*Accept single digit number from user and print it into word.
Input : 9
Output : Nine
Input : -3
Output : Three
Input : 12
Output : Invalid Number */

#include<stdio.h>
void Display(int iNo);
int main()
{
	int iNo;
	printf("Enter a  Number :");
	scanf("%d",&iNo);
	Display(iNo);
	return 0;

}
void Display(int iNo)
{
	if(iNo < 0 )
		iNo =  -iNo;

	switch(iNo)
	{

		case 1:
				printf("\n One %d",iNo);
				break;
		case 2:
				printf("\n Two %d",iNo);
				break;
		
		case 3:
				printf("\n Three %d",iNo);
				break;
		
		case 4:
				printf("\n Four %d",iNo);
				break;
				
		case 5:
				printf("\n Five %d",iNo);
				break;
				
		case 6:
				printf("\n Six %d",iNo);
				break;
				
		case 7:
				printf("\n Sevan %d",iNo);
				break;
				
		case 8:
				printf("\n Eight %d",iNo);
				break;
				
		case 9:
				printf("\n Nine %d",iNo);
				break;
			
		default:
				printf("\n inValid ");
				break;
																						
	}
}
