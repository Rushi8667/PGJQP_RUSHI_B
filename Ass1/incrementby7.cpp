//WAP to calculate the increment of a given number by 7



#include<iostream>
using namespace std;
class increment
{
	int num;


public:
void incrdata()
{
	cin>>num;
	num=num+7;
	
    
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
