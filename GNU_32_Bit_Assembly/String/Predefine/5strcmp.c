#include <stdio.h>
#include<string.h>
int main(void)
{
	char String1[20],String2[20];
	int ch;
	printf("\n Enter First String :");
	gets(String1);
	printf("\n Enter Secound String :");
	gets(String2);

	ch=strcmp(String1,String2);
	if(ch==0)
		printf("\n Both String is Same \n ");
	else
		printf("\n Both String is Diffrant \n");
	
	//getch();
	return 0;
}