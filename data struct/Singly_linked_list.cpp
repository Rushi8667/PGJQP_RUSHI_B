#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class Node{
	public:
		int rollNumber;
		char name[20];
		Node * next; 
};
class List
{
	Node *START;
	public:
	List();
	void addNode();
	bool search(int rollNo,Node **current,Node **previous);
	bool listEmpty();
	bool delNode(int element);
	void treverse();	
};
List::List()
{
	START=NULL;
}
void List::addNode()
{
	int rollNo;
	char nm[20];
	cout<<"\nEnter the roll number of the Student"<<endl;
	cin>>rollNo;
	cout<<"\nEnter the name of Student"<<endl;
	cin>>nm;
	Node *newnode= new Node;
	newnode->rollNumber=rollNo;
	strcpy(newnode->name,nm);
	Node *previous,*current;
	previous=NULL;
	current=START;
	
	while((current!=NULL) && (rollNo>=current->rollNumber))
	{
		if(rollNo==current->rollNumber)
		{
			cout<<"\nDuplicate Roll Number Is Not Allowed\n";
			return;
		}
		previous=current;
		current=current->next;	
	}
	newnode->next=current;
	if(previous==NULL)
		START=newnode;
		else
		previous->next=newnode;
}
bool List::listEmpty()
{
	if(START==NULL)
		return true;
	else
		return false;
}
bool List::delNode(int rollNo)
{
	Node *current,*previous;
	if(search(rollNo,&previous,&current)==false)
		return false;
	if(current==START)
	START=START->next;
	else
	previous->next=current->next;
	delete current;
	return true;
}
bool List::search(int rollNo,Node **previous,Node **current)
{
	*previous=START;
	*current=START;
	while((*current!=NULL) &&(rollNo!=(*current)->rollNumber))
	{
		*previous=*current;
		*current=(*current)->next;
	}
	return(*current!=NULL);
}
void List::treverse()
{
	if(listEmpty())
		cout<<"\nList is Empty\n";
	else
	{
		cout<<endl<<"The Records in list are:"<<endl;
		Node * currentNode;
		for(currentNode=START;currentNode!=NULL;currentNode=currentNode->next)
		{
			cout<<currentNode->rollNumber<<"  "<<currentNode->name<<"\n";
		}
		cout<<endl;
	}
}
int main()
{
	List obj;
	int rollNo;
	char ch;
	while(1)
	{
		cout<<endl<<"Menu";
		cout<<endl<<"1.Add a record to the list"<<endl;
		cout<<"2.Delete reord from the list"<<endl;
		cout<<"3.view all the records in the list"<<endl;
		cout<<"4.Search for a records in the list"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<endl<<"Enter Your Choice(1-5):";
		cin>>ch;
		switch(ch)
		{
			case '1':
				obj.addNode();
				break;
			case '2':
				if(obj.listEmpty())
				{
					cout<<endl<<"List Is Empty"<<endl;
					break;
				}
				cout<<endl<<"\nEnter the roll Number of the student whose record is to be deleted:";
				cin>>rollNo;
				if(obj.delNode(rollNo)==false)
					cout<<endl<<"Record not Found"<<endl;
				else
					cout<<endl<<"Record with Roll Number"<<rollNo<<" Deleted "<<endl;
					break;
			case '3':
				obj.treverse();
				break;
			case '4':
				if(obj.listEmpty()==true)
				{
					cout<<"\nList Is empty\n";
					break;
				}
			Node *previous,*current;
			cout<<endl<<"\nEnter the roll number of student whose record is to be searched";
			cin>>rollNo;
			if(obj.search(rollNo,&previous,&current)==false)
			cout<<endl<<"Record is Not Found"<<endl;
			else
			{
				cout<<endl<<"Record found"<<endl;
				cout<<"\nRoll number: "<<current->rollNumber;
				cout<<endl<<"\n\nName: "<<current->name;
				cout<<"\n";
			}
			break;
			
			case '5':
					exit(0);
					break;
			default:
				cout<<"Invalid Opction."<<endl;
				break;			
		}
	}
}
