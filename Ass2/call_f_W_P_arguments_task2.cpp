#include<iostream>
using namespace std;
class Calling_with_argument{
	int result;
	public:
	int add(int num1,int num2)
	{
		result=num1+num2;
		return(result);
	}
};
int main()
{
	Calling_with_argument c;
	cout<<"Addition oF Two Number="<<c.add(10,20);
	
}
