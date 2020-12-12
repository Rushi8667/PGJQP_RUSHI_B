#include<iostream>
using namespace std;
class findaddress{
	public:
		void display();
};
void findaddress::display()
{
	char name;
	int count=(int)&name;
	cout<<"Address="<<count<<endl;
}
int main()
{
	findaddress find;
	find.display();
}
