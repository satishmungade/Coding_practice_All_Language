#include<stdio.h>
void DigitDs(char Str[])
{
	int iCnt,iCnt1=0;
	char Arr[30];
	while(Str[iCnt] !='\0')
	{
		if(Str[iCnt] >= '0' && Str[iCnt] <= '9')
		{
			Arr[iCnt1]=iCnt;
			iCnt1 ++;
		}
		iCnt ++;
	}
	printf("%s",Arr);
}
int main()
{
	char Str[30];
	printf("Enter Your String : ");
	scanf("%[^'\n']s",Str);
	DigitDs(Str);

	return 0;
}