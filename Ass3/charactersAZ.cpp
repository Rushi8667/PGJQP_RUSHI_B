//WAP to display Characters from A to Z Using Loop

#include<iostream>
using namespace std;
class charcters
{
	char i; 
	public:
		void display();
		
};
void charcters::display()
{
	for(i='A';i<='Z';i++)
	{
		cout<<i<<"\t";
	}
};
int main()
{
charcters chr;
chr.display();	
}
