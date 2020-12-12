#include<iostream>
using namespace std;
class checknum{
	public:
		int check(int num)
		{
			if(num>0)
			{
				cout<<"Number is positive"<<endl;
				if(num%2==0)
				{
					cout<<"Number is Even"<<endl;
				}else
				{
					cout<<"Number is Odd"<<endl;
				}
			}
			else if(num<0)
			{
				cout<<"Number is Negative"<<endl;
			}
		}
};
int main()
{
	checknum check;
	int num;
	cout<<"Enter any number"<<endl;
	cin>>num;
	check.check(num);
	
}
