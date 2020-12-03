#include<iostream>
using namespace std;
class Array
{
	protected:
		int *Arr;
		int iSize;
	public:
		Array(int Value=10)
		{
			cout<<"\nInside Constructor :\n";
			this->iSize=Value;
			this->Arr=new int[iSize];
		}
		Array(Array &ref)
		{
			cout<<"\nInside copy Constructor : \n";
			this->iSize=ref.iSize;
			this->Arr=new int[this->iSize];
			for(int iCnt=0;iCnt < iSize ;iCnt ++)
			{
				this->Arr[iCnt]=ref.Arr[iCnt];
			}

		}
		~Array()
		{
			cout<<"\nInside Destructor :\n";
			delete []Arr;
		}
		inline void Accept();
		inline void Display();
};
void Array::Accept()
{
	cout<<"\nPlease Enter The values :\n";
	for(int iCnt =0 ; iCnt < this->iSize ;iCnt ++)
	{
		cin>>Arr[iCnt];
	}
}
void Array::Display()
{
	cout<<"\nElements in Array \n";
	for(int iCnt =0 ; iCnt < this->iSize ;iCnt ++)
	{
		cout<<Arr[iCnt]<<" | ";
	}

}
class ArrayOperatin :public Array
{
	public :
	ArrayOperatin(int iNo=10):Array(iNo)
	{

	}
	int Frequency(int);
	int SearchFirst(int);
	int SearchLast(int);
	int EvenCount();
	int OddCount();
	int SumAll();
};
int ArrayOperatin ::Frequency(int iNo)
{
	int iCount=0;
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	for(int iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		if(Arr[iCnt]==iNo)
		{
			iCount ++;
		}
	}
	return iCount;
}
int ArrayOperatin::SearchFirst(int iNo)
{
	if(iNo < 0)  
	{
		iNo=-iNo;
	}

	int iCnt;
	for(iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	if(iCnt == iSize)
	{
		return -1;
	}
	else
	{
		return iCnt+1;
	}

}
int ArrayOperatin::SearchLast(int iNo)
{
	if(iNo < 0)
	{
		iNo=-iNo;
	}
	
	int iPos=0;
	for(int iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		
		if(Arr[iCnt]==iNo)
		{
			iPos=iCnt;
		
		}
	}
	if(iPos == iSize)
	{
		return -1;
	}
	else
	{
		return iPos + 1;
	}
	
}
int ArrayOperatin::EvenCount()
{
	int iCount=0;
	for(int iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		if(Arr[iCnt] % 2 == 0)
		{
			iCount ++;
		}
	}
	return iCount;
}	
int ArrayOperatin::OddCount()
{
	int iCount=0;
	for(int iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		if(Arr[iCnt] % 2 == 1)
		{
			iCount ++;
		}
	}
	return iCount;
}	
int ArrayOperatin::SumAll()
{
	int iSum=0;
	for(int iCnt =0 ; iCnt < iSize ;iCnt ++)
	{
		iSum= iSum + Arr[iCnt] ;
		
	}
	return iSum;
}	
int main()
{
	cout<<"\nInside Main\n";
	int iSize=0,iNo=0,iRet=0;
	cout<<"\n\nENter a Size How many Array Elements you Want :";
	cin>>iSize;
	ArrayOperatin Sobj(iSize);
	Sobj.Accept();
	Sobj.Display();
	
	cout<<"\n\nEnter Elements to Sreach Frequency :";
	cin>>iNo;
	iRet=Sobj.Frequency(iNo);
	cout<<"\n\nTotal Frequency of Elements :"<<iRet;
	
	cout<<"\n\nEnter Elements to Sreach-First Occurrance :";
	cin>>iNo;
	iRet=Sobj.SearchFirst(iNo);
	cout<<"\n\nFirst-Position of Elements :"<<iRet;

	cout<<"\n\nEnter Elements to Sreach-Last Occurrance :";
	cin>>iNo;
	iRet=Sobj.SearchLast(iNo);
	cout<<"\n\nLast-Position of Elements :"<<iRet;

	iRet=Sobj.EvenCount();
	cout<<"\n\nCount of Evan-Elements :"<<iRet;


	iRet=Sobj.OddCount();
	cout<<"\n\nCount of Odd-Elements :"<<iRet;

	iRet=Sobj.SumAll();
	cout<<"\n\nAddition of All-Elements :"<<iRet;
	
	return 0;
}
