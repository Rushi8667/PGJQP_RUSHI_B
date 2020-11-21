#include<iostream>
using namespace std;
class Eqality{
	int num1,num2;
	public:
		void input()
		{
			cout<<"Enter Any two number"<<endl;
			cin>>num1;
			cin>>num2;
		}
		void check()
		{
			if(num1!=num2)
			{
				cout<<num1<<" Is Not Equal To "<<num2<<endl;
			}

		}
};
int main()
{
	Eqality equal;
	equal.input();
	equal.check();
}
