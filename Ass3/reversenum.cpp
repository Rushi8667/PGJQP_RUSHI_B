//WAP to display the series from 10 to 1 in reverse order.

#include<iostream>
using namespace std;
class Number
{

	int num=1;
	public:
		void display()
		{
			for(int i=10;i>=1;i--)
			{
			cout<<i<<endl;
			
			}
			
		}
};
int main()
{
	Number n1;
	n1.display();
}
