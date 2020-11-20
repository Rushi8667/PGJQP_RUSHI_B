//wap to declare variable of each data type and print their values.(int char float).


#include<iostream>
using namespace std;
class declare_vari
{
	int num;
	char name[5];
	float num1;
	public:
		void getdata()
		{
			cout<<"enter value of num"<<endl;
			cin>>num;
			cout<<"enter value of name"<<endl;
			cin>>name;
			cout<<"enter value of num1"<<endl;
			cin>>num1;
		}
	void display()
	{
		cout<<"NUM="<<num<<endl;
		cout<<"NAME="<<name<<endl;
		cout<<"NUM1="<<num1<<endl;
	}
};
int main()
{
     declare_vari var;
	 var.getdata();
	 var.display();	
}


