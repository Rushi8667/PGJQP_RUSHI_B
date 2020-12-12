//WAP to display the reverse of a number.

#include<iostream>
using namespace std;
class reverse
{
	int num,reminder,rever=0;
	public:
	void input();
	void display();
};
void reverse::input()
{
	cout<<"enter any num="<<endl;
	cin>>num;
};
void reverse::display()
{
	while(num!=0)
	{
		reminder=num%10;
		rever=rever*10+reminder;
		num=num/10;
	}
	cout<<"Reverse Number="<<rever<<endl;
}
int main()
{
	reverse rev;
	rev.input();
	rev.display();
}
