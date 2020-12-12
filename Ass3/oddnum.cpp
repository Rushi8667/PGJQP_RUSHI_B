//WAP to display first 100 odd numbers.


#include<iostream>
using namespace std;
class odd_num
{
	int num=100,i;
	public:
	void display();
	
};
void odd_num::display()
{
	for(i=1;i<2*num;i++)
	{
		if(i%2!=0)
		{
			cout<<i<<endl;
			
		}
		//
	}
}
int main()
{
	odd_num odd;
	odd.display();
}
