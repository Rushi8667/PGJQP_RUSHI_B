//WAP to Compute Quotient and Remainder

#include<iostream>
using namespace std;
class quotient_reminder
{
	int  divisor, dividend, quotient, remainder;
	public:
		void getdata()
		{
			cout<<"Enter Divisor"<<endl;
			cin>>divisor;
			cout<<"Enter Dividend"<<endl;
			cin>>dividend;
			
		}
		void display()
		{
			quotient=divisor/dividend;
			remainder=divisor%dividend;
			cout<<"Quotient="<<quotient<<endl;
			cout<<"Reminder="<<remainder<<endl;
			
		}
};
int main()
{
	quotient_reminder rem;
	rem.getdata();
	rem.display();
	
}



