/*1. Write a program which accept name from user and print that name.
Input : Piyush Khairnar
Output : Piyush Khairnar */
#include<stdio.h>
int main()
{
	char chchar[30];


	printf("Enter Your Full_Name without space:");
	scan("%s",chchar);
	printf("\n Your Name is :%s ",chchar);
	return 0;
}