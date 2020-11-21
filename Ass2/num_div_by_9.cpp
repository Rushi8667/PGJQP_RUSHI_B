#include<iostream>
using namespace std;
class num_div_by_9{
	int num;
	public:
		void input()
		{
			cout<<"Enter any number"<<endl;
			cin>>num;
		}
		void check()
		{
			if(num%9==0)
			{
				cout<<num<<" Is Devided By Nine"<<endl;
			}
			else
			{
				cout<<num<<" Is Not Devided By Nine"<<endl;				
			}    
		}
};
int main()
{
	num_div_by_9 checknum;
	checknum.input();
	checknum.check();
	
}
