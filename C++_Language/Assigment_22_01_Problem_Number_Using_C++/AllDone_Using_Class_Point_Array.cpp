#include<iostream>
using namespace std;
#define ERRMEMORY -1
#define ERRSIZE -2

class Array
{
	private:
		int *Arr;
		int iSize;
	public:
		Array(int iValue)
		{
			cout<<"\n\t Inside Constructor: "<<endl;
			iSize=iValue;
			Arr=new int[iSize];
		}
		~ Array()
		{
			cout<<"\n\t inside Destructor :"<<endl;
			delete []Arr;
		}
		void Accept();
		void Display();
		int CountEven();
		int CountEvenOddDiff();
		void CheckELEVEN(); //11
		int CheckFrequency(int );
		

};
void Array :: Accept()
{
	for(int iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		cout<<"\n\t Enter The Element for Array :";
		cin>>Arr[iCnt];
	}
}
void Array :: Display()
{
		cout<<"\n\t Your Enter Element is :";
		for(int iCnt =0 ; iCnt < iSize ; iCnt ++)
		{
			cout<<"|"<<Arr[iCnt]<<"|";
		}
}

int Array :: CountEven()
{
	int iCount=0;
	if(Arr==NULL)
	{
		return ERRMEMORY;
	}
	for(int iCnt =0 ; iCnt < iSize ; iCnt ++)
	{
		if(Arr[iCnt] % 2==0)
			iCount ++;

	}
	return iCount;
} 
int Array :: CountEvenOddDiff()
{
	int iEven=0,iOdd=0;
	if(Arr==NULL)
	{
		return ERRMEMORY;
	}
	for(int iCnt =0 ; iCnt < iSize ; iCnt ++)
	{
		if(Arr[iCnt] % 2==0)
			iEven ++;
		else if(Arr[iCnt] % 2 == 1)
			iOdd ++;

	}
	return (iEven- iOdd);
} 
void Array ::CheckELEVEN()
{
	if(Arr == NULL)
		return ;
	int iCnt;
	for(iCnt =0 ;iCnt < iSize ; iCnt ++)
	{
		if(Arr[iCnt]== 11)
			break;
	}
	if(Arr[iCnt] == 11)
		cout<<"\n\t ELEVEN is present";
	else		
		cout<<"\n\t ELEVEN is absent";
		
}
int Array ::CheckFrequency(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	if(Arr == NULL)
	{
		return ERRMEMORY;
	}
	int iCnt,iCount=0;
	for(iCnt=0 ; iCnt < iSize ; iCnt ++)
	{
		if(iNo== Arr[iCnt])
			iCount ++;
	}
	return iCount;
}
int main()
{
	cout<<"\n\t  Inside main \n"<<endl;
	int iSize=0,iNo=0,iRet=0;
	cout<<"\n\t Enter a Size of Array :\t";
	cin>>iSize;
	if(iSize < 0)
	{
		iSize=-iSize;
	}
	Array obj(iSize);
	obj.Accept();
	obj.Display();
	iRet=obj.CountEven();
	if(iRet == -1)
		cout<<"ERRMEMORY Faild"<<iRet<<endl;
	else
		cout<<"\n\tCount of Even Number :"<<iRet<<endl;
	iRet=obj.CountEvenOddDiff();
	if(iRet == -1)
		cout<<"ERRMEMORY Faild"<<iRet<<endl;
	else
		cout<<"\n\t Count of Even-Odd-Dirence Number :"<<iRet<<endl;
	obj.CheckELEVEN();
	int Number;
	cout<<"\n\t Enter A Element Check That Number frequency :";
	cin>>Number;
	iRet=obj.CheckFrequency( Number);
	if(iRet == -1)
		cout<<"ERRMEMORY Faild"<<iRet<<endl;
	else
		cout<<"\n\t Total Frequency Your Element is :"<<iRet;
		
	return 0;		
}
