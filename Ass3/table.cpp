//WAP to display the table of any number


#include<iostream>
using namespace std;
class table1
{
	int num,i,table;
	public:
	void input(); 
	void display();
};
void table1::input()
{
	cout<<"enter any num="<<endl;
	cin>>num;
	
	
}


void table1::display()
{
	if(num%2==0)
	{
			for(i=1;i<=10;i++)
		{
			table=num*i;
			cout<<table<<endl;
			
		}
	}
		else
		{
				for(i=1;i<=10;i++)
		{
			table=num*i;
			cout<<table<<endl;
			
		}
	}
	
};
int main()
{
	table1 t;
	t.input();
	t.display();
}

