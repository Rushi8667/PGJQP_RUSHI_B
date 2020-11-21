#include<iostream>
using namespace std;
class swap_W_variable{
	int a,b;
	public:
		void input()
		{
			cout<<"Enter any Number"<<endl;
			cin>>a;
			cin>>b;
		}
		void display()
		{
			cout<<"Before swapped a="<<a<<" And="<<b<<endl;
			a=a*b;
			b=a/b;
			a=a/b;
			cout<<"After swapped a="<<a<<" And="<<b<<endl;
		}
};
int main()
{
	swap_W_variable var;
	var.input();
	var.display();
}
