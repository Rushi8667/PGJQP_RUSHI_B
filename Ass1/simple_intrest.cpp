//WAP to calculate the Simple Interest


#include<iostream>
using namespace std;
class Simple_intrest
{
	int p,r,t,i;
	public:
		void getdata()
		{
			cout<<"Enter The Value of Principal"<<endl;
			cin>>p;
			cout<<"Enter The Value Of Rate Of Intrest"<<endl;
			cin>>r;
			cout<<"Enter the Time"<<endl;
			cin>>t;
			i=(p*r*t)/100;
		}
		void display()
		{
			cout<<"The Simple Interest Is="<<i<<endl;
		}
};
int main()
{
	Simple_intrest intr;
	intr.getdata();
	intr.display();
}
