#include<iostream>
using namespace std;
class checkleap{
	int year;
	public: 
	 void input()
	 {
	 	cout<<"Enter Any Year"<<endl;
	 	cin>>year;
	 }
	 void check()
	 {
	 	if(year%4==0)
	 	{
	 		if(year%100==0)
	 		{
	 			if(year%400==0)
	 			{
	 				cout<<year<<" Is Leap Year"<<endl;
				 }
				 else
				 {
				 	cout<<year<<" Is Not Leap Year"<<endl;
				 }
			 }
			 else
			 {
			 	cout<<year<<" Is A Leap Year"<<endl;
			 }
		 }
		 else
		 {
		 	cout<<year<<" Is A Not Leap Year"<<endl;
		 }
	 }
};
int main()
{
	checkleap leap;
	leap.input();
	leap.check();
}
