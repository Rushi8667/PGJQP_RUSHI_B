#include<iostream>
using namespace std;
class Multiple_oftwo{
	int arr[10], n, i;
	public:
		void input();
		void display();
};
void Multiple_oftwo::input()
{
	cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
	
}
void Multiple_oftwo::display()
{
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
	Multiple_oftwo mul;
	mul.input();
	mul.display();
}
