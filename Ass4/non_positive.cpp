#include<iostream>
using namespace std;
class non_positive{
	int n,arr[10],i,count=0;
	public:
		void input();
		void display();
};
void non_positive::input()
{	
	cout<<"Enter Size Of Array"<<endl;
	cin>>n;
	cout<<"Enter element in array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];	
	}	
}
void non_positive::display()
{
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			arr[i]=0;
			cout<<arr[i]<<endl;
		}else if(arr[i]>0)
		{
			cout<<arr[i]<<endl;	
		}
	}
	
}
int main()
{
	non_positive posi;
	posi.input();
	posi.display();
}
