#include<iostream>
using namespace std;
class Equality{
	int num1,num2,sum;
	public:
		void input()
		{
			cout<<"Enter Any Two Number"<<endl;
			cin>>num1;
			cin>>num2;
		}
		void check()
		{
			sum=num1+num2;
			if(sum>100)
			{
				cout<<"Addition of two number is grater than 100"<<endl;
			}
			else
			{
				cout<<"Addition of two number is less than 100"<<endl;
			}
		}
};
int main()
{
	Equality e;
	e.input();
	e.check();
}
