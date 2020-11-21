#include<iostream>
using namespace std;
class NumberCheck{
	int num;
	public:
		void input()
		{
			cout<<"Enter Any Number"<<endl;
			cin>>num;
		}
		void check()
		{
			if(num<10)
			{
				cout<<num<<" is Less than 10"<<endl;
			}
			else
			{
				cout<<num<< " Is Greater than 10"<<endl;
			}
		}
};
int main()
{
	NumberCheck num;
	num.input();
	num.check();
}
