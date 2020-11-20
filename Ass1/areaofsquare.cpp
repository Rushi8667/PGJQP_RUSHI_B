//WAP to calculate the area of Square.

#include<iostream>
using namespace std;
class areaofsquare
{
	int side,sqrarea;
	public:
		void getdata()
		{
			cout<<"Enter the side"<<endl;
			cin>>side;
			sqrarea=side*side;
		}
		void display()
		{
		
			cout<<"Area of Square="<<sqrarea<<endl;
		}
};
int main()
{
	areaofsquare sqr;
	sqr.getdata();
	sqr.display();
}
