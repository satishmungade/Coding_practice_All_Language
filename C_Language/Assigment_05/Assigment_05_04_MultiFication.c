/*4. Write a program which accept three numbers and print its multiplication.

Input : 5 4 7
Output : 140

Input : 5 0 7
Output : 35

Input : 5 0 0
Output : 5

Input : 0 0 0
Output : 0 */

#include<stdio.h>

int Multiplt(int ,int ,int );
int main()
{
	int iNo=0,iNo1=0,iNo2=0,iRet =0;


	printf("Enter a Three Numbers ");
	scanf("%d %d %d",&iNo,&iNo1,&iNo2);
	iRet=Multiplt(iNo,iNo1,iNo2);
	printf("multiplication of Three numbers :%d",iRet);

	return 0;

}
int Multiplt(int iNo,int iNo1,int iNo2)
{
	int iAns=0 ;
	if( iNo == 0) 
	{
		iNo=1;
		
	}
	if( iNo1 == 0) 
	{
		iNo1=1;
	}
	if( iNo2 == 0) 
	{
		iNo=0;
	}
	iAns = iNo * iNo1 * iNo2 ;
	return iAns ; 
/*	int iArr[3] = { iNo ,iNo1 , iNo2 };
	int iMult =1,iCounter =0;
	if( iNo == 0 && iNo1 == 0 && iNo2 == 0)
		return 0;
	for(iCounter = 0;iCounter < 3 ;iCounter ++)
	{
		if( iArr [iCounter] != 0)
			iMult = iMult * iArr[iCounter];
	} */
}

