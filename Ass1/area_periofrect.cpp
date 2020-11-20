//WAP to calculate the perimeter and area of Rectangle

#include<iostream>
using namespace std;
class rectangle
{
	int width, lngth, area, peri;
	public:
		void getdata()
		{
			cout<<"Enter the length"<<endl;
			cin>>lngth;
			cout<<"Enter the Width"<<endl;
			cin>>width;
			area=(lngth*width);
			peri=2*(lngth+width);
		}
		void display()
	{
		cout<<"The Area Of Rectangle Is="<<area<<endl;
		cout<<"The Perimeter Of Rectangle Is="<<peri<<endl;
	}
};
int main()
{
	rectangle rect;
	rect.getdata();
	rect.display();
}
