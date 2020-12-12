#include<iostream>
using namespace std;
class avg_check{
	int num1,num2,num3,num4,num5;
	float sum,avg;
	public:
		void input()
		{
			cout<<"Enter Any Five Number"<<endl;
			cin>>num1>>num2>>num3>>num4>>num5;
		}
		void check()
		{
			sum=num1+num2+num3+num4+num5;
			avg=sum/5;
			if(avg>100)
			{
				cout<<"Average "<<avg<<" Is grater than 100"<<endl;
			}
			else if(avg<100)
			{
				cout<<"Average "<<avg<<" Is less than 100"<<endl;
			}
		}
};
int main()
{
	avg_check avg;
	avg.input();
	avg.check();
}
