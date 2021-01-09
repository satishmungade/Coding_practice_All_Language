#include <iostream>
#include<fstream>
using namespace std;
struct student
{
	int iRollNo;
	char cName[20];
	float iMarks;
};
void AcceptInfo(int iNo)
{
	fstream obj;
	struct student sobj;
	string fname;
	cout<<"\n Enter a File Name:";
	cin>>fname;
	obj.open(fname,ios::in);
	if(obj.faid)
	for(int iCnt=1; iCnt <= iNo; iCnt ++ )
	{
		cout<<"\n Enter a student Name :";
		cin>>sobj.cName;
		cout<<"\n Enter a student iRollNo";
		cin>>sobj.iRollNo;
		cout<<"\n Enter a Student marks with ";
		cin>>sobj.iMarks;
		obj<<sobj.cName<<"\t"<<sobj.iRollNo<<"\t"<<sobj.iMarks;
	}
}
void DisplayInfo()
{

}
int main()
{
	int iNo;
	cout<<"\nhow many student information are u enter :";
	cin>>iNo;
	AcceptInfo(iNo);
	DisplayInfo();
	
}