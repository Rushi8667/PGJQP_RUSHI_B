//WAP to display your name 5 times on screen.

#include<iostream>
using namespace std;
class Name
{
	char name;
	public:
		void display()
		{
			for(int i=0;i<5;i++)
			{
				cout<<"Rushii"<<name<<endl;
			}
			
		}
};
int main()
{
	Name d1;
	d1.display();
}
