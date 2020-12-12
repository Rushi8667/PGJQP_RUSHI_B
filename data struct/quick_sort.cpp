#include<iostream>
using namespace std;
class quick_sort{
	int n,arr[100];
	public:
		void input();
		void swap(int ,int);
		void q_sort(int ,int );
		void display();
		int getsize();
};
void quick_sort::input()
{
	cout<<"Enter Array size"<<endl;
	cin>>n;
	cout<<"Enter Array Element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
}
void quick_sort::swap(int x,int y)
{
	int temp;
	temp=arr[x];
	arr[x]=arr[y];
	arr[y]=temp;
}
void quick_sort::q_sort(int low ,int high)
{
	int pivot ,i,j;
	if(low>high)
	return;
	i=low+1;
	j=high;
	pivot=arr[low];
	while(i<=j)
	{
		while((arr[i]<= pivot) && (i<= high))//find the grater value than pivate form left to right
		{
			 i++;
		}
		while((arr[j]>pivot) &&(j>=low))//find the lower value than pivate from right to left
		{
			j--;
		}
		if(i<j)
		{
			swap(i,j);
		}
		if(low<j)
		{
			swap(low,j);
		}
		q_sort(low,j-1);
		q_sort(j+1,high);
	}
}
void quick_sort::display()
{
	cout<<"Sorted Array"<<endl;
	for(int j=0;j<n;j++)
	{
		cout<<arr[j]<<endl;
	}
}
int quick_sort::getsize()
{
	return(n);
}
int main()
{
	quick_sort sort;
	sort.input();
	sort.q_sort(0,sort.getsize()-1);
	sort.display();
}
