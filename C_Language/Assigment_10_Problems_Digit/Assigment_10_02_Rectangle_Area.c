/*2. Write a program which accept width & height of rectangle from user and calculate
its area. (Area = Width * Height)
Input : 5.3 9.78
Output : 51.834*/
#include<stdio.h>
double RectangleArea(float  ,float);
int main()
{
	float fValue=0.0,fValue1;
	double dRet=0.0;

	printf("Enter a Width :");
	scanf("%f",&fValue);
	printf("\nEnter a Height :");
	scanf("%f",&fValue1);

	dRet=RectangleArea(fValue,fValue1);
	printf("Area : %lf",dRet);

	return 0;
}
double RectangleArea(float fWidth,float fHeight)
{
	double dArea=0.0;
	dArea = fWidth *fHeight;
	return dArea;
}