

#include<iostream>
using namespace std;
class alphabate{
	char ch;
	public:
		void input()
		{
			cout<<"Enter Any character"<<endl;
			cin>>ch;
		}
		void check()
		{
			if(ch>='a' && ch<='z' || ch>='A' && ch<='z')
			{
				cout<<ch<<" Is a Character"<<endl;
			}
			else
			{
				cout<<ch<<" Is NOt A Charater"<<endl;
			}
		}
};
int main()
{
	alphabate a;
	a.input();
	a.check();
}
