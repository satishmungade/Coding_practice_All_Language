#include<iostream>
#include <fstream>
using namespace std;
int main()
{
	
	string name;
	cout<<"Enter your file Name check file size:";
	cin>>name;
	fstream obj(name,ios::in);
	obj.seekg(0,ios::end);
	int fileSize=obj.tellg();
	cout<<name<<" Total file size is :"<<" "<<fileSize<<"bytes";
	obj.close();
}
