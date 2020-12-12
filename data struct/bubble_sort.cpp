#include<iostream>
using namespace std;
class bubble_sort
{
	int n,arr[10];
	public:
		void input();
		void sort();
		void display();
};
void bubble_sort::input()
{
	cout<<"Enter Size of array"<<endl;
	cin>>n;
	cout<<"Enter Element of Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void bubble_sort::sort()
{
	for(int i=1;i<n;i++)
	{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void bubble_sort::display()
{
	cout<<"Sorted Array="<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<endl;
	}
}
int main()
{
	bubble_sort sort;
	sort.input();
	sort.sort();
	sort.display();
}
