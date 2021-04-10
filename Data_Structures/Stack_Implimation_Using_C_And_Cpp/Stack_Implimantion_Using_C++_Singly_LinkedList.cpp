#include<iostream>
using namespace std; 
class Node
{
	private:
		int iData;
		Node *pNext;
	public:
		Node()
		{
			iData=0;
			pNext=NULL;
		}
		~Node()
		{

		}
		friend class Stack;

};
class Stack
{
	private:
		Node *pFirst;
	public:
		Stack()
		{
			pFirst=NULL;
		}	
		~Stack()
		{

		}
	void Push(int);
	int Pop();
	void Display();
	int Count();	
};
int main()
{
	Stack Obj;
	int iCount=0,iNo=0,iChoice=0,iDelData=0;

	while(1)
	{
		cout<<"\n\n 1.Push\n 2.Pop\n 3.Count\n 4.Display\n 0.Exit";
		cout<<"\nEnter Your Choice \t:";
		cin>>iChoice;
		switch(iChoice)
		{
			case 1:
					cout<<"\nEnter A Element to Push \t:";
					cin>>iNo;
					Obj.Push(iNo);
					Obj.Display();
				break;

			case 2:
					iDelData=Obj.Pop();
					cout<<"\n\n poped First Element in Stack : "<<iDelData;
					Obj.Display();
				break;

			case 3:
					iCount=Obj.Count();
					cout<<"\n Total Element in Aviable Stack : "<<iCount;
				break;
			
			case 4:
					Obj.Display();
				break;
			case 0:
					cout<<"\n Thank you for using the application\n";
                return 0;
                
            default:
                cout<<"Wrong choice\n";
				
		}
	}
	return 0;
}	




void Stack::Push(int iNo)
{
	Node *NewNode=NULL;
	NewNode = new Node;
	NewNode->pNext=NULL;
	NewNode->iData=iNo;
	if(pFirst == NULL)
	{
		pFirst=NewNode;
	}
	else
	{
		NewNode->pNext=pFirst;
		pFirst=NewNode;
	}
}
int Stack :: Pop()
{
	int iNo=-1;
	Node *Temp=pFirst;
	if(pFirst == NULL)
	{
		return iNo;
	}
	else
	{
		iNo=pFirst->iData;
		pFirst=pFirst->pNext;
		delete(Temp);
		return iNo;	
	}
}
void Stack :: Display()
{
	Node *Temp=pFirst;
	if(Temp == NULL)
	{
		cout<<"\n Your Stack Is Empty :";
		return ;
	}
	cout<<"\n\n";
	while(Temp != NULL)
	{
		cout<<"|"<<Temp->iData<<"|\n";
		Temp=Temp->pNext;
	}
}
int Stack :: Count()
{	
	int iCount =0;
	Node *Temp=pFirst;
	if(Temp == NULL)
	{
		cout<<"\n Your Stack Is Empty :";
		return iCount ;
	}
	while(Temp != NULL)
	{
		iCount ++;
		Temp=Temp->pNext;
	}
	return iCount;
}
