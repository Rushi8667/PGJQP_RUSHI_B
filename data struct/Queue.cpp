#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node *next;
	Node (int d,Node *n=NULL):data(d),next(n){}
	
};
class LinkedQueue{
	Node *FRONT,*REAR;
	public:
		 LinkedQueue();
		 void insert(int element);
		 void remove();
		 void display();
};
LinkedQueue::LinkedQueue()
{
	FRONT=NULL;
	REAR=NULL;
}
void LinkedQueue::insert(int element)
{
	Node *newnode;
	newnode=new Node(element,NULL);
	if(FRONT==NULL)
	{
		FRONT=newnode;
		REAR=newnode;
	}
	else
	{
		REAR->next=newnode;
		REAR=newnode;
	}
	cout<<"\nNumber "<<element<<" insert into the Queue"<<endl;
}
void LinkedQueue::remove()
{
	if(FRONT==NULL)
	{
		cout<<"Queue iS Empty"<<endl;
		return;
	}
	else
	{
		cout<<"\n The element is deleted form the queue"<<FRONT->data<<endl;
		FRONT=FRONT->next;
	}
}
void LinkedQueue::display()
{
	Node *tmp;
	if(FRONT==NULL)
	{
		cout<<"\nQueue is empty"<<endl;
		return;
	}
	else
	{
		cout<<"\n The Queue Is ..............."<<endl;
		for(tmp=FRONT;tmp!=NULL;tmp=tmp->next)
		{
			cout<<tmp->data<<"  ";
		}
		cout<<endl;
	}
}
int main()
{
	LinkedQueue q;
	char ch;
	int num;
	do
	{
		cout<<"\nMENU......"<<endl;
		cout<<"1.Implement Insert Operation in the Queue"<<endl;
		cout<<"2.Implement Delete Operation in the Queue"<<endl;
		cout<<"3.Display value"<<endl;
		cout<<"4.Exit"<<endl;
		cout<<"Enter Your Choice (1-4):";
		cin>>ch;
		cout<<endl;
		switch(ch)
		{
			case '1':
					cout<<"Enter A number:";
					cin>>num;
					q.insert(num);
					break;
			case '2':
					q.remove();
					break;
			case '3':
					q.display();
					break;
			case '4':
					break;
			default:
					cout<<"invalid opction"<<endl;
					break;
		}
	}while(ch!='4');
}
