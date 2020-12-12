#include<iostream>
using namespace std;
class liner_search{
	int search,n,arr[50],i;
	public:
		void input();
		void check();
};
void liner_search::input()
{
	cout<<"Enter Array Size"<<endl;
	cin>>n;
	cout<<"Enter Array Element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter element you want to search"<<endl;
	cin>>search;
}
void liner_search::check()
{
	for( i=0;i<n;i++)
	{
		if(arr[i]==search)
		{
			cout<<"Element is found "<<search<<" at position "<<i<<endl;
			break;
		}
	}
	if(arr[i]!=search)
	{
		cout<<search<<" Element is not found in array"<<endl;	
	}	
}
int main()
{
	 liner_search ele;
	 ele.input();
	 ele.check();

}
