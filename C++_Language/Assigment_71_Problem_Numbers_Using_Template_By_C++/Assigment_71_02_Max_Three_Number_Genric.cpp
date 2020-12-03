#include<iostream>
using namespace std;
template<typename T>
T MaxNumber(T iNo1,T iNo2,T iNo3)
{
	T Ans=0;	
	if((iNo1 >= iNo2) && (iNo1 >= iNo3))
	{
		Ans=iNo1;
	}
	else if((iNo2 >= iNo1) && (iNo2 >= iNo3))
	{
		Ans=iNo2;
	} 
	else
	{
		Ans=iNo3;
	}
	return Ans;
}
int main()
{
	int iRet=MaxNumber(10,30,20);
	cout<<"\n its integer Number MaxNumber  :"<<iRet;
	float fRet=MaxNumber(10.0f,20.01f,40.1f);
	cout<<"\n its Floating Number Max :"<<fRet;
	return 0;
}