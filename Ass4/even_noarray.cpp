#include<iostream>
using namespace std;
class Even_noarray{
	int arr[10], n, i;
	public:
		void input();
		void display();
};
void Even_noarray::input()
{
	cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
	
}
void Even_noarray::display()
{
	cout<<"Even Element in array"<<endl;
    for (i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
        {
        	cout<<arr[i]<<endl;
		}
          
    }


}
int main ()
{
	Even_noarray evn;
	evn.input();
	evn.display();
}
