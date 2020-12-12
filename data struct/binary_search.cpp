#include<iostream>
using namespace std;
class liner_search{
	int search,i,arr[50],n;
	public:
		void input();
		void check();
};
void liner_search::input()
{
	cout<<"Enter Array size"<<endl;
	cin>>n;
	cout<<"Enter Array Element"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
}
void liner_search::check()
{
        cout << "\nEnter the element you want to search: ";
        cin >> search;
        
        int lowerbound = 0;
        int upperbound = n - 1;
        int mid = (lowerbound + upperbound) / 2;
        while ((search != arr[mid]) && (lowerbound <= upperbound))
        {
            if (search > arr[mid])
                lowerbound = mid + 1;
            else
                upperbound = mid - 1;
            mid = (lowerbound + upperbound) / 2;
           
        }

        if (search == arr[mid])
    		cout << "\n" << search << " found at position " <<(mid +1) << endl;
        else
            cout << "\n" << search << " not found in the array" <<endl;
}
int main()
{
	liner_search lin;
	lin.input();
	lin.check();
}
