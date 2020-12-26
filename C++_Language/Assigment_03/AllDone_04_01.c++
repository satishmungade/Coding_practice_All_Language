#include<iostream>
using namespace std;
class print
{
	public :
	print ()
	{

	}
	
	~ print()
	{

	}
	inline void printEven(int );
	inline void EvenFactor(int);
	inline void Factor(int);
	inline void DisplayConvert(char );
};
void print:: printEven(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	for(int iCnt=1 ; iCnt <= iNo *2 ;iCnt ++)
	{
		if(iCnt % 2== 0)
		{
			cout<<iCnt<<endl;
		}
	}
}
void print :: Factor(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	for(int iCnt =1 ;iCnt <= iNo /2 ;iCnt ++)
	{
		if(iNo % iCnt== 0 )
			cout<<iCnt<<endl;
	}
}
void print :: EvenFactor(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	for(int iCnt =1 ;iCnt <= iNo /2 ;iCnt ++)
	{
		if((iNo % iCnt== 0) && (iCnt % 2==0))
			cout<<iCnt<<endl;
	}
}
void print :: DisplayConvert(char ch)
{
	if(ch > 96)
	{
		ch=ch-32;
		cout<<ch<<endl;
	}
	else if(ch <= 97)
	{
		ch=ch+32;
		cout<<ch<<endl;
	}

}
int main()
{
	print obj;
	int iNo;
	cout<<"Enter a number to print Even Number :";
	cin>>iNo;
	obj.printEven(iNo);
	cout<<"Enter a number to printFactoer that Number :";
	cin>>iNo;
	obj.Factor(iNo);
	cout<<"Enter a number to print Even Factoer that Number :";
	cin>>iNo;
	obj.EvenFactor(iNo);
	char ch;
	cout<<"Enter a Character to convert opposite side :";
	cin>>ch;
	obj.DisplayConvert(ch);
}