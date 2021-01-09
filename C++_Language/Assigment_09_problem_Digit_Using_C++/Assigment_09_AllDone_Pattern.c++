#include<iostream>
using namespace std;
class Digit
{
	public:
	void print(int iNo)
	{
		if(iNo < 0)
		iNo=-iNo;

		for(int iCnt =0 ; iCnt < iNo ; iCnt ++)
		{
			cout<<"\t$\t*";
		}
	}
	void printNumber(int iNo)
	{
		if(iNo < 0)
			iNo=-iNo;
		cout<<"\n"<<endl;
		for(int iCnt =1 ;iCnt <= iNo ; iCnt ++)
		{
			cout<<iCnt<<"\t";
		}
	}
	void NigetiveTopositive(int iNo)
	{
		cout<<"\n"<<endl;
		for(int iCnt = -iNo;iCnt <= iNo; iCnt ++)
		{
			cout<<iCnt<<"\t";
		}
	}	
	void printOddNumber(int iNo)
	{
		if(iNo < 0)
			iNo=-iNo;
		cout<<"\n\n"<<endl;
		for(int iCnt =1 ; iCnt <= iNo ; iCnt ++)
		{
			if(iCnt % 2 == 1)
			{
				cout<<iCnt<<"\t";
			}
		}
	}
	void Multiplacation(int iNo)
	{
		if(iNo < 0 )
			iNo=-iNo;
		cout<<"\n\n"<<endl;
		for(int iCnt=1 ; iCnt <= 5 ;iCnt ++)
		{
			int iMult=iNo * iCnt ;
			cout<<iMult<<"\t";
		}
	}
};

int main()
{
	Digit obj;
	int iNo=0;
	cout<<"Enter a Number :";
	cin>>iNo;
	obj.print(iNo);
	obj.printNumber(iNo);
	obj.NigetiveTopositive(iNo);
	obj.printOddNumber(iNo);
	obj.Multiplacation(iNo);
	return 0;
}
