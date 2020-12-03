#include<iostream>
using namespace std;
template <class T>
T AddN(T *Arr,int iSize)
{

	if(Arr == NULL)
	{
		return -1;
	}
	int iCnt=0;
	T Max=Arr[iCnt];
	for(iCnt=0;iCnt < iSize ; iCnt ++ )
	{
		if(Max < Arr[iCnt])
		{
			Max=Arr[iCnt];
		}
	}
	return Max;
}
int main()
{
	int iArr[]={10,20,70,40,50};
	float fArr[]={10.0,20.0,90.3,40.0,50.1};

	int iMax=AddN(iArr,5);
	cout<<"\n Max Number in Interger Array is:"<<iMax;
	float fMax=AddN(fArr,5);
	cout<<"\n Max Number in floating Array is :"<<fMax;
	return 0;
}