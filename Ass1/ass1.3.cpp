//wap to print an integer(enterd by the user)


#include<iostream>
using namespace std;
class display_integer
{   
    int num;
    public:void display()
    {
    	cout<<"enter any integer value\n";
    	cin>>num;
    	cout<<"enterd num is="<<num;
	}
   
};
int main()
{
	display_integer d2;
	d2.display();
}
