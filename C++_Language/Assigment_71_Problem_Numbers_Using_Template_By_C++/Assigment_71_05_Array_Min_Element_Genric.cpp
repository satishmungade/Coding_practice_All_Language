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
	T Min=Arr[iCnt];
	for(iCnt=0;iCnt < iSize ; iCnt ++ )
	{
		if(Min > Arr[iCnt])
		{
			Min=Arr[iCnt];
		}
	}
	return Min;
}
int main()
{
	int iArr[]={10,20,70,40,50};
	float fArr[]={5.1,20.0,90.3,40.0,50.1};

	int iMin=AddN(iArr,5);
	cout<<"\n Minimam Number in Interger Array is:"<<iMin;
	float fMin=AddN(fArr,5);
	cout<<"\n Minimam Number in floating Array is :"<<fMin;
	return 0;
}