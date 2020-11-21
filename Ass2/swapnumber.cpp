#include<iostream>
using namespace std;
class swapnumber{
	int num1,num2,num3;
	public:
		void input()
		{
			cout<<"Enter Any Two Number"<<endl;
			cin>>num1;
			cin>>num2;
		}
		void swapnum()
		{
			cout<<"Before Swapped Number is"<<num1<<" And "<<num2<<endl;
			num3=num1;
			num1=num2;
			num2=num3;
			cout<<"Swappped Number is "<<num1<<" And "<<num2;
		}
};
int main()
{
	swapnumber sap;
	sap.input();
	sap.swapnum();
}
