#include<iostream>
using namespace std;
class element_ofarray{
	int arr[10]={1,2,3,4,5,6,7,8,9};
	int count=0,i;
	public:
		void countelement();
};
void element_ofarray::countelement()
{
	for(i=0;i<10;i++)
	{
		if(arr[i]!='\0')
		{
			count++;
		}
			
	}
	cout<<"Element In Array"<<count<<endl;
}
int main()
{
	element_ofarray element;
	element.countelement();
}
