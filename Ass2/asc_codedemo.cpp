//WAP to find the ASCII code for any character
//A-Z – 65 to 90 , a-z 97 to 122


#include<iostream>
using namespace std;
class asciii_code
{
	char c;  
	public:
		void getdata()
		{
		cout<<"Enter A Character="<<endl;
		cin>>c;	
		}
		void display()
		{
			cout << "ASCII Value of " << c << " is " << int(c);
		}
};
int main()
{
	asciii_code as;
	as.getdata();
	as.display();
}
