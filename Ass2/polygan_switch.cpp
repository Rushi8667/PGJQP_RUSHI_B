#include<iostream>
#include<math.h>
using namespace std;
class polygon
{

	float a, b, c, s, radius, area;
	int ch;
	public:
	void input()
	{	
	cout<<"1.Area Of Circle";
	cout<<"\n2.Area Of Rectangle";
	cout<<"\n3.Area Of Triangle \n";
	cout<<"\nEnter Your Choice :"<<endl;
	cin>>ch;
    }
    void check()
    {
	switch(ch)
	{
	case 1:
	{
	cout<<"\nEnter the Radius of Circle: "<<endl;
	cin>>radius;
	area=3.14159*radius*radius;
	cout<<"Area of Circle = "<<area<<endl;
	break;
	}
	case 2:
	{
	cout<<"\nEnter the Length and Breadth of Rectangle:"<<endl;
	cin>>a>>b;
	area=a*b;
	cout<<"Area of Rectangle = "<<area<<endl;
	break;
	}
	case 3:
	{
	cout<<"\nEnter All Three Sides of Triangle with 3 Sides:"<<endl;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Area of Triangle = "<<area<<endl;
	break;
	}
	default: cout<<"\n Invalid Choice Try Again...!!!";
	break;
	}
  }
};
int main()
{
	polygon ploy;
	ploy.input();
	ploy.check();
}
