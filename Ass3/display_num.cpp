//WAP to display no 1 to 10 on screen.


#include<iostream>
using namespace std;
class Number
{
	int num=1;
	public:
		void display()
		{
			for(int i=1;i<=10;i++)
			{
				cout<<num<<endl;
			num++;
			}
			
		}
};
int main()
{
	Number n1;
	n1.display();
}
