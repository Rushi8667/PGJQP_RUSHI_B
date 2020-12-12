#include<iostream>
using namespace std;
class Insertion_sort
{
	int n,arr[10];
	public:
		void input();
		void sort();
		void display();
};
void Insertion_sort::input()
{
	cout<<"Enter Size of array"<<endl;
	cin>>n;
	cout<<"Enter Element of Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void Insertion_sort::sort()
{
	for(int i=1;i<=n-1;i++)
	{
		int temp=arr[i];
		int j=i-1;
		
		while((j>=0)&&(arr[j]>temp))
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
}
void Insertion_sort::display()
{
	cout<<"Sorted Array="<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<endl;
	}
}
int main()
{
	Insertion_sort sort;
	sort.input();
	sort.sort();
	sort.display();
}
