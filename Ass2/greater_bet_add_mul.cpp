#include<iostream>
using namespace std;
class Grater{
	int num1,num2,add,mul;
	public:
		void input()
		{
			cout<<"Enter Any Two Number"<<endl;
			cin>>num1>>num2;
		}
		void check()
		{
			 add=num1+num2;
			 mul=num1*num2;
			 if(add>mul)
			 {
			 	cout<<add<<" Is Grater than "<<mul<<endl;
			 }
			 else
			 {
			 	cout<<mul<<" Is Grater than "<<add<<endl;
			 }
		}
};
int main()
{
	Grater grater;
	grater.input();
	grater.check();
}
