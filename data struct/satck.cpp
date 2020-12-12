#include<iostream>
using namespace std;
class Node{
	public:
		int info;
		Node *next;
};
class stack{
	private:
		Node *top;
		
	public:
		satck()
		{
			top=NULL;
		}
		int empty()
		{
			if(top==NULL)
				return(true);
			else
				return(false);
		}
		void push(int passed_value)
		{
			Node *temp;
			temp=new Node();
			temp->info=passed_value;
			temp->next=top;
			top=temp;
			cout<<endl<<passed_value<<"pushed."<<endl;
		}
		int pop()
		{
			Node *tmp;
			tmp=top;
			top=top->next;
			int x=tmp->info;
			delete(tmp);
			return(x);
		}
		void display()
		{
			if(top==NULL)
			cout<<endl<<"stack is empty"<<endl;
			else
			{
				Node *currentNode;
				cout<<endl<<"The content of the stack are:"<<endl;
				for(currentNode=top;currentNode!=NULL;currentNode=currentNode->next)
				{
					cout<<currentNode->info<<"\n";
				}
			}
		}
};
int main()
{
	int choice,x,num;
	stack mysatck;
	do
	{
		cout<<"\n***STACK MENU***\n\n";
		cout<<"1.PUSH\n";
		cout<<"2.POP\n";
		cout<<"3.DISPLAY\n";
		cout<<"4.EXIT\n";
		cout<<"\n Enter Your Choice\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
					cout<<"\n Enter a number\n";
					cin>>num;
					mysatck.push(num);
					break;
			case 2:
					if(mysatck.empty())
					{
						cout<<endl<<"Satck Empty"<<endl;
						break;
					}
					x=mysatck.pop();
					cout<<endl<<"The Popped value is="<<x<<endl;
					break;
			case 3:
					mysatck.display();
					break;
			case 4:
					break;
			default:
					cout<<"\nInvlid Choice.try again\n";
		}
	}while(choice!=4);
}
