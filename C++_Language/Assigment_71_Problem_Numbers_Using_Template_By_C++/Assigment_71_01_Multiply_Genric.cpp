#include<iostream>
using namespace std;
template<typename T>
T Multiplay(T iNo,T iNo1)
{
	T Ans;
	Ans=iNo * iNo1;
	return Ans;
}
int main()
{
	int iRet=Multiplay(10,20);
	cout<<"\n its integer Number Multiplation :"<<iRet;
	float fRet=Multiplay(10.0f,20.01f);
	cout<<"\n its Floating Number Multiplation :"<<fRet;
	return 0;
}