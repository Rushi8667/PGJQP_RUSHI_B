#include<iostream>
using namespace std;
class num_div_by_7{
	int num;
	public:
		void input()
		{
			cout<<"Enter any number"<<endl;
			cin>>num;
		}
		void check()
		{
			if(num%7==0)
			{
				cout<<num<<" Is Devided By Seven"<<endl;
			}
			else
			{
				cout<<num<<" Is Not Devided By Seven"<<endl;				
			}    
		}
};
int main()
{
	num_div_by_7 checknum;
	checknum.input();
	checknum.check();
	
}
