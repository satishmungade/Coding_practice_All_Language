#include<iostream>
using namespace std;
template <class T>
T AddN(T *Arr,int iSize)
{
	if(Arr == NULL)
	{
		return -1;
	}
	T Sum=0;
	for(int iCnt=0;iCnt < iSize ; iCnt ++ )
	{
		Sum=Sum + Arr[iCnt];
	}
	return Sum;
}
int main()
{
	int iArr[]={10,20,30,40,50};
	float fArr[]={10.0,20.0,30.0,40.0,50.1};

	int iSum=AddN(iArr,5);
	cout<<"\nAddition is Integer Number is:"<<iSum;
	float fSum=AddN(fArr,5);
	cout<<"\nAddition of float Number is :"<<fSum;
	return 0;
}