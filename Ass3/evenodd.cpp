//WAP to display first 10 even numbers

#include<iostream>
using namespace std;
class evenodd
{
	int num=10,i;
	public:
	void display();
	
};
void evenodd::display()
{
	for(i=1;i<2*num;i++)
	{
		if(i%2==0)
		{
			cout<<i<<endl;
			//num++;
		}
		//
	}
}
int main()
{
	evenodd e;
	e.display();
}
