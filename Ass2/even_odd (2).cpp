//WAP to check whether a number is even or odd.

#include<iostream>
using namespace std;
class evanodd
{
	int n;
	public:
		void input()
		{
		cout<<"Check Number is Even Or Odd"<<endl;
		cout<<"Enter any Number"<<endl;
		cin>>n;
		}
		void check()
		{
			if(n%2==0);
			{
			cout<<n<<" Number Is Even"<<endl;
			}else 
			{
			cout<<n<<" Number Is Odd"<<endl;
			}
		
		}
};
int main()
{
	evanodd ed;
	ed.input();
	ed.check();
}
