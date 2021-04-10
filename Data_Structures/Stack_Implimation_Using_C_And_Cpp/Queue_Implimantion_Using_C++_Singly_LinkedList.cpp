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
	friend class Queue;

};
class Queue
{
	private:
		Node *pFirst;
	public:
		Queue()
		{
			pFirst=NULL;
		}	
		~Queue()
		{

		}
	void Push(int);
	int Pop();
	void Display();
	int Count();	
};
void Queue :: Push(int iNo)
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
		Node *Temp=pFirst;
		while(Temp->pNext != NULL)
		{
			Temp=Temp->pNext;
		}
		Temp->pNext=NewNode;
	}

}
int Queue :: Pop() 
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
void Queue :: Display()
{
	Node *Temp=pFirst;
	if(Temp == NULL)
	{
		cout<<"\n Your Queue Is Empty :";
		return ;
	}
	cout<<"\n\n";
	while(Temp != NULL)
	{
		cout<<"|"<<Temp->iData<<"|\n";
		Temp=Temp->pNext;
	}
}
int Queue:: Count()
{	
	int iCount =0;
	Node *Temp=pFirst;
	if(Temp == NULL)
	{
		cout<<"\n Your Queue Is Empty :";
		return iCount ;
	}
	while(Temp != NULL)
	{
		iCount ++;
		Temp=Temp->pNext;
	}
	return iCount;
}

int main()
{
	Queue Obj;
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
					cout<<"\n\n poped First Element in Queue : "<<iDelData;
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



