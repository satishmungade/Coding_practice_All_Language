#include<iostream>
using namespace std;
class Node
{
	private:
		int Eid;
		char Ename[20];
		char Eaddress[30];
		char Eproject[20];
		char Egender;
		int Esalary;
		int Eage;
		Node *pNext;
	public:
		Node()
		{
			Eid=0;
			Ename[20]='\0';
			Eaddress[30]='\0';
			Eproject[20]='0';
			Egender='\0';
			Esalary=0.0f;
			Eage=0;
			pNext=NULL;
		}
		friend class Emplyee;
};
class Emplyee
{
	private:
		Node *pHead;
		int iSize;
	public:
		Emplyee()
		{
			pHead=NULL;
			iSize=0;
		}
		void Accept();
		void Insert();
		int TotalEmplyee();
		void Display();
};
void Emplyee :: Insert()
{
	Node *NewNode=new Node();
	NewNode->pNext=NULL;
	cout<<"\n Enter a Emplyee ID:";
	cin>>NewNode->Eid;
	cout<<"\n Enter a Emplyee Name :";
	cin>>NewNode->Ename;
	cout<<"\n Enter a Address :";
	cin>>NewNode->Eaddress;
	cout<<"\n Enter a Project Name :";
	cin>>NewNode->Eproject;
	cout<<"\n Enter a Gendar :";
	cin>>NewNode->Egender;
	cout<<"\n Enter a Salary :";
	cin>>NewNode->Esalary;
	cout<<"\n Enter a Age :";
	cin>>NewNode->Eage;
	if(pHead == NULL)
	{
		pHead=NewNode;
	}
	else
	{
		NewNode->pNext=pHead;
		pHead=NewNode;
	}
	iSize ++;
}
int Emplyee :: TotalEmplyee()
{
	return iSize;
}
void Emplyee :: Display()
{
	cout<<"\n\n Emplyee Information is :"<<endl;
	while (pHead != NULL)
	{
		cout<<"\n Emplyee iD is :"<<pHead->Eid<<"\n Emplyee Name is :"<<pHead->Ename<<"\n Emplyee Address is :"<<pHead->Eaddress;
		cout<<"\n Emplyee working on project is:"<<pHead->Eproject<<"\n Emplyee gender is :"<<pHead->Egender<<"\n Emplyee salary is:"<<pHead->Esalary;
		cout<<"\n Emplyee Age is:"<<pHead->Eage;
		pHead=pHead->pNext;
	}
}
int main()
{
	Emplyee obj;
	int iCount=0;
	cout<<"Jay-Ganesh"<<endl;
	
	obj.Insert();
	obj.Display();
	iCount=obj.TotalEmplyee();
	cout<<"\n TotalEmplyee Count is :"<<iCount;
	return 0;
}
