#include<iostream>
using namespace std;
class calling_code{
	int num1,num2,result;
	public:
	int add()
	{
		cout<<"Enter any two number";
		cin>>num1;
		cin>>num2;
		result=num1+num2;
		return(result);
	}
};
int main()
{
	calling_code c;
	cout<<"Result="<<c.add();
}
