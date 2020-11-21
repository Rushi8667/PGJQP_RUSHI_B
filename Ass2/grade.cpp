#include<iostream>
using namespace std;
class Grade{
	float marks;
	public:
		void input()
		{
			cout<<"Enter Your Marks"<<endl;
			cin>>marks;
		}
		void  check()
		{
			if(marks>=90)
			{
				cout<<"You are Passed in A grade"<<endl;
			}
			else if(marks>=80 && marks<90)
			{
				cout<<"You are Passed in B grade"<<endl;
			}
			else if(marks>=60 && marks<80)
			{
				cout<<"You are Passed in C grade"<<endl;
			}
			else if(marks>=45 && marks<60)
			{
				cout<<"You are Passed in D grade"<<endl;
			}
			else if(marks<45)
			{
				cout<<"You are Passed in Fail grade"<<endl;
			}
			
		}
};
int main()
{
	Grade grade;
	grade.input();
	grade.check();
}
