#include<stdio.h>
#include<stdlib.h>
int Addition(int,int);
int Substraction(int,int);
int Multiplaction(int,int);
int Division(int,int);
int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;
	do{
		printf("\n\t 1.Addition :- \n\t 2.Substraction :- \n\t 3.Multiplaction :- \n\t 4.Division :- \n\t 5.Exit :-\n");
		printf("\nEnter Your Choice :");
		scanf("%d",&iChoice);
		if(iChoice > 0 && iChoice < 5)
		{
			printf("\n Enter Two Number for Arithmatic Operation : ");
			scanf("%d%d",&iNo1,&iNo2);
		}
		switch(iChoice)
		{
			case 1:
					iAns=Addition(iNo1,iNo2);
				break;
			case 2:
					iAns=Substraction(iNo1,iNo2);
				break;
			case 3:
					iAns=Multiplaction(iNo1,iNo2);
				break;
			case 4:
					iAns=Division(iNo1,iNo2);
				break;
			case 5:
				exit(0);
			default:
				printf("\n Enter Valid Choice");		
				iChoice = 1;
					continue;

		}
		printf("\n iAns is :%d",iAns);
		printf("\n\n Are You want to Enter Choice(Yes /1)(No/0) :");
		scanf("%d",&iChoice);
	}while(iChoice == 1);
	printf("\n Thank-You for Using Appication \n");

	exit(0);
}
int Addition(int iNo1,int iNo2)
{
	int iAns;
	iAns= iNo1 + iNo2;
	return iAns;
}
int Substraction(int iNo1,int iNo2)
{
	
	int iAns;
	iAns= iNo1 - iNo2;
	return iAns;	
}
int Multiplaction(int iNo1,int iNo2)
{
	int iAns;
	iAns= iNo1 * iNo2;
	return iAns;
}
int Division(int iNo1,int iNo2)
{
	int iAns; 
	iAns=iNo1 / iNo2;
	return iAns;
}