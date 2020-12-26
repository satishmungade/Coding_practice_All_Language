#include<iostream>
using namespace std;
class Fact
{
	public:
	int Factorial(int iNo)
	{
		int fact=1,iCnt=0;
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		if(iNo == 1)
			return 1;
		for(iCnt=1 ;iCnt <= iNo ;iCnt ++)
			fact=fact*iCnt;

		return fact;
	}	
	void Display(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		if(1 == iNo)
			cout<<"Its One"<<endl;
		else if(2 == iNo)
			cout<<"its Two"<<endl;
		else if(3 == iNo)
			cout<<"its three"<<endl;
		else if(4 == iNo)
			cout<<"its Four"<<endl;
		else if(5 == iNo)
			cout<<"its Five"<<endl;
		else if(6 == iNo)
			cout<<"its Six"<<endl;
		else if(7 == iNo)
			cout<<"its Seven"<<endl;
		else if(8 == iNo)
			cout<<"its eight"<<endl;
		else if(9 == iNo)
			cout<<"its nine"<<endl;
		else
			cout<<"Invalid Number"<<endl;
	}
	void TablePrint(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		for(int iCnt = 1 ; iCnt <=10; iCnt ++)
		{
			int iTable=iCnt *iNo;
			cout<<iTable<<"\t";
		}
	}
	void TablePrintRevers(int iNo)
	{
		if(iNo < 0)
		{
			iNo=-iNo;
		}
		cout<<"\n"<<endl;
		for(int iCnt = 10 ;  iCnt > 0 ; iCnt --)
		{
			int iTable=iCnt *iNo;
			cout<<iTable<<"\t";
		}
	}
};
int main()
{
	Fact obj;
	int iNo=0,iRet=0;
	cout<<"ENter a number :";
	cin>>iNo;
	iRet=obj.Factorial(iNo);
	cout<<"Given Number Factorial is :"<<iRet<<endl;
	obj.Display(iNo);
	obj.TablePrint(iNo);
	obj.TablePrintRevers(iNo);
	return 0;
}