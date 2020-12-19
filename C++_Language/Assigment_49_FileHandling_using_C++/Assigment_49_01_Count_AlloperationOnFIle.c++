#include<iostream>
#include<fstream>
using namespace std;
class FileHandling
{
	public :
		fstream obj;
	int CountCapCharactor(string filename)
	{
		int iCount=0;
		obj.open(filename,ios::in);
		if(!obj)
		{
			cout<<"--------- No such file--------:"<<endl;
			return -1;
		}
		else
		{
			char ch;
			while(1)
			{
				obj>>ch;
				if(obj.eof())
					break;
				if(ch >= 'A' && ch <='Z' )
				{
					iCount ++;
				}

			}
		}	
		obj.close();
		return iCount;
	}
	int CountSmallCharactor(string filename)
	{
		int iCount=0;
		obj.open(filename,ios::in);
		if(!obj)
		{
			cout<<"--------- No such file--------:"<<endl;
			return -1;
		}
		else
		{
			char ch;
			while(1)
			{
				obj>>ch;
				if(obj.eof())
					break;
				if(ch >= 'a' && ch <='z' )
				{
					iCount ++;
				}

			}
		}	
		obj.close();
		return iCount;

	}	
	int CountNumber(string filename)
	{

		int iCount=0;
		obj.open(filename,ios::in);
		if(!obj)
		{
			cout<<"--------- No such file--------:"<<endl;
			return -1;
		}
		else
		{
			char ch;
			while(1)
			{
				obj>>ch;
				if(obj.eof())
					break;
				if(ch >= '0' && ch <='9' )
				{
					iCount ++;
				}

			}
		}	
		obj.close();
		return iCount;

	}
	int FrequencyCount(string filename,char key)
	{

		int iCount=0;
		obj.open(filename,ios::in);
		if(!obj)
		{
			cout<<"--------- No such file--------:"<<endl;
			return -1;
		}
		else
		{
			char ch;
			while(1)
			{
				obj>>ch;
				if(obj.eof())
					break;
				if(ch == key)
				{
					iCount ++;
				}

			}
		}	
		obj.close();
		return iCount;
	}
	int ReadDataCount(string filename)
	{

		int iCount=0;
		obj.open(filename,ios::in);
		if(!obj)
		{
			cout<<"--------- No such file--------:"<<endl;
			return -1;
		}
		else
		{
			char ch;
			while(1)
			{
				obj>>ch;
				if(obj.eof())
					break;
				cout<<ch;
				iCount ++;

			}
		}	
		obj.close();
		return iCount;
	}  

};
int main()
{
	FileHandling Bobj;
	
	string filename;

	cout<<"enter your file name:";
	cin>>filename;

	int iCap=Bobj.CountCapCharactor(filename);
	cout<<"Total Capital letar is:"<<iCap<<endl;


	int iSmall=Bobj.CountSmallCharactor(filename);
	cout<<"Total Small letar is:"<<iSmall<<endl;


	int Number=Bobj.CountNumber(filename);
	cout<<"Total Numrical value in file :"<<Number<<endl;

	
	char ch;
	cout<<"Enter Charactor to sreach Frequency of count:";
	cin>>ch;
	int iFreq=Bobj.FrequencyCount(filename,ch);
	cout<<ch <<" count of Charactor  is:"<<iFreq<<endl;

	int iRead=Bobj.ReadDataCount(filename);
	cout<<"\n Total Data Read Data Count is  :"<<iRead<<endl;

	
	return 0;
}