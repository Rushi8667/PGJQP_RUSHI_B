#include<iostream>
using namespace std;
class pointeradd{
	int num1, num2, *ptr1, *ptr2, sum=0;
	public:
		void input();
		void display();
};
void pointeradd::input()
{
	cout<<"Enter the two number :";
	cin>>num1>>num2;	
}
void pointeradd::display()
{
	ptr1 = &num1;
	ptr2 = &num2;
	sum = *ptr1 + *ptr2;
	cout<<"Sum of the two number is "<<sum;
}
int main()
{
	pointeradd add;
	add.input();
	add.display();
}
