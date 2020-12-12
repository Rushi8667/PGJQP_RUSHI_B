#include <iostream>
#define ARRAY_SIZE 5
using namespace std;
class Array_sorting{
	int numbers[ARRAY_SIZE], i ,j ,temp;
	public:
		void input();
		void display();
};
void Array_sorting::input()
{
	cout<<"Simple C++ Example Program for Sorting (Asending Order) In Array\n";
    for (i = 0; i < ARRAY_SIZE; i++)
    {
		cout<<"Enter the Number : "<< (i+1) <<"  : ";
        cin>>numbers[i];
    }	
}
void Array_sorting::display()
{
	for (i = 0; i < ARRAY_SIZE; ++i)
    {
        for (j = i + 1; j < ARRAY_SIZE; ++j)
        {
            if (numbers[i] > numbers[j])
            {
                temp =  numbers[i];
                numbers[i] = numbers[j];
                numbers[j] = temp;
            }
        }
    }   
    cout<<"Sorting Order Array: \n";
    for (i = 0; i < ARRAY_SIZE; ++i)
        cout<<numbers[i]<<endl;
} 
int main()
{
	Array_sorting sort;
	sort.input();
	sort.display();
}
