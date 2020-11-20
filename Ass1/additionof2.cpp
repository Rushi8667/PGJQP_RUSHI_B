//WAP to calculate the addition of 2 numbers


#include<iostream>
using namespace std;
class addition
{
	int num1,num2,sum;
	public:
		void getdata()
		{
			cout<<"Enter Two Value="<<endl;
			cin>>num1;
			cin>>num2;
		}
		void display()
		{
			sum=num1+num2;
		cout<<"Addition Is="<<sum<<endl;
		}
		
};
int main()
{
	addition add;
	add.getdata();
	add.display();
}
