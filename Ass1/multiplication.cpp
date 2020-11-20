//WAP to calculate the multiplication of three numbers.


#include<iostream>
using namespace std;
class multiplication
{
	int num1,num2,num3,sum;
	public:
		void getdata()
		{
			cout<<"Enter three Value="<<endl;
			cin>>num1;
			cin>>num2;
			cin>>num3;
		}
		void display()
		{
			sum=num1*num2*num3;
		cout<<"Multiplication Is="<<sum<<endl;
		}
		
};
int main()
{
	multiplication multi;
	multi.getdata();
	multi.display();
}
