//WAP to find the average of 5 numbers

#include<iostream>
using namespace std;
class average
{
	int a,b,c,d,e,sum,avg;
	public:
		void getdata()
		{
			cout<<"Enter any five nums="<<endl;
			cin>>a>>b>>c>>d>>e;
			
		}
		void display()
		{
			sum=(a+b+c+d+e);
			avg=sum/2;
			cout<<"Average of Five Num Is="<<avg<<endl;
		}
		
};
int main()
{
	average avr;
	avr.getdata();
	avr.display();
	
}


