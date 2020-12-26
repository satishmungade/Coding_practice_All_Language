#include<iostream>
using namespace std;
class Digit
{
	public :
	bool Checkpali(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		int Old=iNo,iResult=0,iRem=0;
		while(iNo !=0)
		{
			iRem=iNo %10;
			iResult=iResult *10 + iRem;
			iNo=iNo/10;
		}
		if(Old == iResult)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void Revers(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		int iRem=0;
		cout<<"\n Revers order :";
		while(iNo !=0)
		{
			iRem=iNo %10;
			cout<<iRem;
			iNo=iNo/10;
		}
	}
	int DigitCount(int iNo)
	{
		int iCnt=0;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		while(iNo != 0)
		{
			int iDigit=iNo %10;
			iCnt ++;
			iNo=iNo /10;
		}
		return iCnt;
	}	
	void CheckZero(int iNo)
	{
	
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		int iDigit =0;
		while(iNo != 0)
		{
			iDigit=iNo %10;
			if(iDigit == 0)
			{
				break;
			}
			iNo=iNo /10;
		}
		if(iDigit == 0)
		{
			cout<<"\n There is Zero ";
		}
		else
		{
			cout<<"\n There is no Zero";
		}
	
	}

};

int main()
{
	Digit obj;
	int iNo=0;
	bool bRet=false;
	cout<<"\n Enter Number chech waither Number operation perfrom :";
	cin>>iNo;
	bRet=obj.Checkpali(iNo);
	if(bRet == false)
		cout<<"\n Number is Not Palidrom"<<endl;
	else
		cout<<"\n Number Palidrom"<<endl;
	obj.Revers(iNo);
	int iRet=obj.DigitCount(iNo);
	cout<<"\n Total Digit Count is :"<<iRet;
	
	obj.CheckZero(iNo);
	return 0;
}