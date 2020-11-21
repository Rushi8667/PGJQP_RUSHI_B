#include<iostream>
using namespace std;
class Even_odd{
	int num;
	public:
		void input()
		{
			cout<<"Check Number is Even Or Odd"<<endl;
			cout<<"Enter any Number"<<endl;
			cin>>num;
		}
		void check()
		{
			if(num%2==0)
			{
				cout<<num<<" Number Is Even"<<endl;
			}else
			{
				cout<<num<<" Number Is Odd"<<endl;
			}
		}
};
int main()
{
	Even_odd e;
	e.input();
	e.check();
}
