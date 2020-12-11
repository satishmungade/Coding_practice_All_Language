#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream obj;
	string name;
	cout<<"Enter file to which want to open :";
	cin>>name;
	obj.open(name,ios::in ); // ios:: in file not aviable they cant create a  file.
							//ios ::out if file not parset that that file is creating  

	if(!obj)
	{
		cout<<"FIIE Not Found"<<endl;
	}
	else
	{
		cout<<"FIlE Succuefully opend;"<<endl;
	}
	obj.close();
	return 0;


}