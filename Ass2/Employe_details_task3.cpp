#include<iostream>
using namespace std;
class Employe{
	int Empid,Age;
	string Name,Address,ContactNumber;
	public:
	void input()
	{
		cout<<"Enter Employe Id"<<endl;
		cin>>Empid;
		cout<<"Enter Employe Name"<<endl;
		cin>>Name;
		cout<<"Enter Employe age"<<endl;
		cin>>Age;
		cout<<"Enter Employe Address"<<endl;
		cin>>Address;
		cout<<"Enter Employe ContactNumber"<<endl;
		cin>>ContactNumber;
	}
	void display()
	{
		cout<<"----Employe Details----"<<endl;
		cout<<"Employe Id           ="<<Empid<<endl;
		cout<<"Employe Name         ="<<Name<<endl;
		cout<<"Employe Age          ="<<Age<<endl;
		cout<<"Employe Address      ="<<Address<<endl;
		cout<<"Employe ContactNumber="<<ContactNumber<<endl;	
	}
};
int main()
{
	Employe Emp1,Emp2;
	Emp1.input();
	Emp2.input();
	Emp1.display();
	Emp2.display();
}
