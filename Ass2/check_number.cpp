#include<iostream>
using namespace std;
class CheckNumber{
	int num;
	public:
		void input()
		{
			cout<<"Enter Any Number......."<<endl;
			cin>>num;
		}
		void check()
		{
			if(num>0)
			{
				cout<<num<<" Is Positive Number"<<endl;
			}
			else if(num<0)
			{
				cout<<num<<" Is Negative Number"<<endl;
			}
			else if(num==0)
			{
				cout<<num<<" Is Zero......"<<endl;
			}
		}
};
int main()
{
	CheckNumber check;
	check.input();
	check.check();
}
