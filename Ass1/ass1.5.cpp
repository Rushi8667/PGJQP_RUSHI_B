//WAP to calculate the increment of a given number by 1


#include<iostream>
using namespace std;
class increment
{
	int num;


public:
void incrdata()
{
	cin>>num;
	num++;
	
    
}

void display()
{
	cout<<"Incremented Value="<<num<<endl;
}
};
int main()
{
	increment incr;
	incr.incrdata();
	incr.display();
}
