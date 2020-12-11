#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream obj;
	string name;
	cout<<"Enter your file that file data read:";
	cin>>name;

	obj.open(name,ios::in);
	if(!obj)
	{
		cout<<"No such File";
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
		}
	}
	obj.close();
	return 0;
}