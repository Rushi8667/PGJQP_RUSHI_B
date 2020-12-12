#include<iostream>
using namespace std;
class transepose_matrix{
   int a[10], b[10],c[10], num1, num2, i, j;
	public:
		void accept();
		void display();
};
void transepose_matrix::accept()
{
	cout<<"Enter The Value OF First Array"<<endl;
	cin>>num1;
	cout<<"Enter Element of array"<<endl;
	for(i=0;i<num1;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter The Value OF second Array"<<endl;
	cin>>num2;
	cout<<"Enter Element of array"<<endl;
	for(i=0;i<num2;i++)
	{
		cin>>b[i];
	}
}
void transepose_matrix::display()
{
	if(num1==num2)
	{
	for(i=0;i<num1&&num2;i++)
	{
		c[i]=a[i]+b[i];
		cout<<i<<"add="<<c[i]<<endl;
	}
	
	}else
	{
		cout<<"Both array value are not same\nEnter the same value"<<endl;
	}
	
}
int main()
{
	transepose_matrix matrix;
	matrix.accept();
	matrix.display();
}
