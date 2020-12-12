#include<iostream>
using namespace std;
class rev_num{
	public:
		int n, reversedNumber = 0, remainder;
		int rev_num_function(int n)
		{
			while(n!=0)
			{
        		remainder = n%10;
        		reversedNumber = reversedNumber*10 + remainder;
        		n /= 10;
			}
			cout<<"Reverse Number="<<reversedNumber<<endl;
		}
	/*	int getdata()
		{
			cout<<"Enter any number"<<endl;
			cin>>num;
			return num;
		}*/
};
int main()
{
	int num;
	rev_num rev;
	//rev.getdata();
	cout<<"Enter Any Number"<<endl;
	cin>>num;
	rev.rev_num_function(num);
	
}
