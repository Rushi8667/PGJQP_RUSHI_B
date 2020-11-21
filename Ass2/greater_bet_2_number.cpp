#include<iostream>
using namespace std;
class Greater2number{
	int num1,num2;
	public:
		void input()
		{
			cout<<"Enter Two Number"<<endl;
			cin>>num1;
			cin>>num2;
		}
		void check()
		{
			if(num1>num2)
			{
				cout<<num1<<" IS Greater than "<<num2<<endl;
			}else if(num2>num1)
			{
				cout<<num2<<" IS Greater than "<<num1<<endl;
			}
		}
};
int main()
{
	Greater2number two;
	two.input();
	two.check();
}
