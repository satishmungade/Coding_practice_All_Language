#include<iostream>
using namespace std;
int main()
{
	string str="satish mungade";
	cout<<"Enter your String :"
	cout<<"proper string \t"<<str<<endl;

	for(int iCnt=0; iCnt <str.size() ;iCnt ++)
	{
		if(str[iCnt] >='a' && str[iCnt] <='z')
		{
			str[iCnt] -=32;
		}
	}
	cout<<"upercase \t"<<str<<endl;

	for(int iCnt=0 ;iCnt < str.size();iCnt ++)
	{
		if(str[iCnt] >='A' && str[iCnt]<='Z')
		{
			str[iCnt] +=32;
		}
	}
	cout<<"LowerCase \t"<<str<<endl;
}