//WAP to calculate the sum of digits in a number.

#include<iostream>
using namespace std;
class digit
{
	int n,sum=0,m;
	public:
		void input();
		void display();
		
};
void digit::input()
{
	cout<<"enter any num="<<endl;
	cin>>n;
}
void digit::display()
{
	while(n>0)
	{
		m=n%10;
		sum=sum+m;
		n=n/10;
	}
	cout<<"sum is="<<sum<<endl;

}
int main()
{
	digit dg;
	dg.input();
	dg.display();
}
