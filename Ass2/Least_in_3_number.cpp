#include<iostream>
using namespace std;
class GreaterNumber{
	int num1,num2,num3;
	public:
		void input()
		{
			cout<<"Enter Any Three Number"<<endl;
			cin>>num1;
			cin>>num2;
			cin>>num3;
		}
		void check()
		{
			if(num1<num2 && num1<num3)
			{
				cout<<num1<<" Is Less Than "<<num2<<" And "<<num3<<endl;
			}
			else if(num2<num1 && num2<num3)
			{
				cout<<num2<<" IS Less Than "<<num1<<" And "<<num3<<endl;
			}
			else
			{
				cout<<num3<<" IS Less Than "<<num1<<" And "<<num2<<endl;
			}
		}
};
int main()
{
	GreaterNumber num;
	num.input();
	num.check();
	
}
