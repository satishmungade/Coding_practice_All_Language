#include<iostream>
using namespace std;
class calculation
{
	public :
	double CricleArea(float fRadius )
	{
		float pi=3.14;
		double Area = (pi * fRadius * fRadius);
		return Area;
	}
	double RectangleArea(float fWidth,float fHeight)
	{
		double Area=fWidth * fHeight;
		return Area;
	}
	int KMtoMeter(int iNo)
	{
		int Ans=iNo*1000;
		return Ans;
	}
	double FahrenheitToCelsius(float fTemp)
	{
		double celsius=(fTemp-32)*(5/9);
		return celsius;
	}
};
int main()
{
	calculation obj;
	float fValue=0.0;
	double dRet=0.0;
	/*cout<<"Enter Radius with point values :";
	cin>>fValue;
	dRet=obj.CricleArea(fValue);
	cout<<"Area of Cricle is :"<<dRet;
	float fValue1=0.0,fValue2=0.0;
	cout<<"\n Enter a width :";
	cin>>fValue1;
	cout<<"\n Enter a fHeight ";
	cin>>fValue2;
	dRet=obj.RectangleArea(fValue1,fValue2);
	cout<<"\n Area of Rectangle :"<<dRet;
	int iNo=0,iRet=0;
	cout<<"\n Enter Distance integer values :";
	cin>>iNo;
	iRet=obj.KMtoMeter(iNo);
	cout<<"\n Total Meter is :"<<iRet;
	*/cout<<"\n Enter Temperature in Fahrenheit:";
	cin>>fValue;
	dRet=obj.FahrenheitToCelsius(fValue);
	cout<<"\n celsius is :"<<dRet;
	return 0;
}