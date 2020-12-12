#include <iostream>
using namespace std;
class fibo_serise{
	    int n, t1 = 0, t2 = 1, nextTerm = 0;
		public:
			void gedata();
			void check();
	
};
void fibo_serise::gedata()
{
	cout <<"Enter the number of terms: ";
    cin >> n;	
}
void fibo_serise::check()
{
	    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout << " " << t1;
            continue;
        }
        if(i == 2)
        {
            cout << t2 << " ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;  
        cout << nextTerm << " ";
	}
}
int main()
{
	fibo_serise fibo;
	fibo.gedata();
	fibo.check();
}
