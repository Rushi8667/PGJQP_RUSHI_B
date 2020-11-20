//WAP to calculate the area of Circle


#include<iostream>
#define pi 3.14
using namespace std;
class areaofcircle
{
	float areaofcircle,radius ;
	public:
		void getdata()
		{
			cout<<"Enter the Radius of Circle"<<endl;
			cin>>radius;
			areaofcircle=pi*(radius*radius);
		}
		void display()
		{
		
			cout<<"Area of Circle="<<areaofcircle<<endl;
		}
};
int main()
{
	areaofcircle rad;
	rad.getdata();
	rad.display();
}
