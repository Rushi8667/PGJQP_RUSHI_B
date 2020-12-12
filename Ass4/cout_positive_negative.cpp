#include<iostream>
using namespace std;
class count_eo{
	int num,arr[10],i,positive=0,negative=0;
	public:
		void input();
		void display();
};
void count_eo::input()
{
	cout<<"Enter Size of Array"<<endl;
	cin>>num;
	cout<<"Enter Elemet of Array"<<endl;
	for(i=0;i<num;i++)
	{
		cin>>arr[i];	
	}	
}
void count_eo::display()
{
	for(i=0;i<num;i++)
	{
		if(num%2==0)
		{
			positive++;
		}
		else if(num%2!=0)
		{
			negative++;
		}
	}
	cout<<"Positive number is"<<positive<<endl;
	cout<<"Negative Number is"<<negative<<endl;
}
int main()
{
	count_eo count;
	count.input();
	count.display();
}
