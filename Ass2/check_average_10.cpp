#include<iostream>
using namespace std;
class checkaverage{
	int num1,num2,num3,num4,num5,avg;
	public:
		void input()
		{
			cout<<"Enter Five Number"<<endl;
			cin>>num1;
			cin>>num2;
			cin>>num3;
			cin>>num4;
			cin>>num5;
		}
		void check()
		{
			avg=(num1+num2+num3+num4+num5)/5;
			if(avg>10)
			{
				cout<<avg<<" Is Grater than 10"<<endl;
			}
			else
			{
				cout<<avg<<" Is Less Than 10"<<endl;
			}
		}
};
int main()
{
	checkaverage avg;
	avg.input();
	avg.check();
}
