//WAP to Multiply two Floating Point Numbers


#include<iostream>
using namespace std;
class multiplication
{
	float num1,num2,mult;
	public:
		void input()
		{
			cout<<"Enter Two Values="<<endl;
			cin>>num1;
			cin>>num2;
		}
		void display()
		{
			mult=num1*num2;
			cout<<"Multiplication Is="<<mult<<endl;
		}
};
int main()
{
	multiplication multi;
	multi.input();
	multi.display();
}
