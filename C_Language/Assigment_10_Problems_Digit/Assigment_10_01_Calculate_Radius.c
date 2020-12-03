/*1.Write a program which accept radius of circle from user and calculate its area.
Consider value of PI as 3.14. (Area = PI * Radius * Radius)
Input : 5.3
Output : 88.2026
Input : 10.4
Output : 339.6224*/
#include<stdio.h>
double circleArea(float fRadius);
int main()
{
	float fValue=0.0;
	double dRet=0.0;

	printf("Enter a Radius floating point value :");
	scanf("%f",&fValue);

	dRet=circleArea(fValue);
	printf("Area : %lf",dRet);

	return 0;
}
double circleArea(float fRadius)
{
	double dArea=0.0;
	dArea = 3.14 *fRadius *fRadius;
	return dArea;
}