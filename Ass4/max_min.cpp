#include<iostream>
using namespace std;
class Max_Min{
	int arr[10], n, i, max, min;
	public:
		void input();
		void display();
};
void Max_Min::input()
{
	cout << "Enter the size of the array : ";
    cin >> n;
    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];
	
}
void Max_Min::display()
{
	max = arr[0];
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    cout << "Largest element : " << max;
    cout << "Smallest element : " << min;
}
int main ()
{
	Max_Min max;
	max.input();
	max.display();
}
