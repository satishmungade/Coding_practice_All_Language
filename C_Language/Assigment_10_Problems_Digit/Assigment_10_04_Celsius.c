
#include<stdio.h>
double Celsius(float );
int main()
{
	float fValue = 0.0;
	double dRet=0.0;

	printf("Enter Temperature in Fatrenheit :");
	scanf("%d",&fValue);

	dRet=Celsius(fValue);
	printf("%lf:",dRet);
	
	return 0;	
}
double Celsius(float fFahrenhit)
{
	
	//double dCelsius=0.0;
	 return (fFahrenhit-32) * (5/9);
	
	// return dCelsius ;
}