//WAP to display the sum of first 10 natural number(1 2 3…)

#include<iostream>
using namespace std;
class additionnumbers
{
	int sum=0,i;
	public:
//		void input();
		void display();
};
/*void additionnumbers::input()
{
	cout<<"enter numbers="
}*/
void additionnumbers::display()
{
	for(i=0;i<=10;i++)
	{
		sum=sum+i;
	}
    cout<<"Addition Of First Ten Num="<<sum<<endl;	
}
int main()
{
	additionnumbers add;
	add.display();
}
