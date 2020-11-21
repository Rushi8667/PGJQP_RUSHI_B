#include<iostream>
using namespace std;
class MonthYear{
	int monthnumber;
	public:
		void input()
		{
			cout<<"Enter any Month number Bet 1 to 12"<<endl;
			cin>>monthnumber;
		}
		void display()
		{
			switch(monthnumber)
			{
				case 1:
					cout<<monthnumber<<" Means january"<<endl;
					break;
				case 2:
					cout<<monthnumber<<" Means febraury"<<endl;
					break;
				case 3:
					cout<<monthnumber<<" Means March"<<endl;
					break;
				case 4:
					cout<<monthnumber<<" Means April"<<endl;
					break;
				case 5:
					cout<<monthnumber<<" Means May "<<endl;
					break;
				case 6:
					cout<<monthnumber<<" Means June"<<endl;
					break;
				case 7:
					cout<<monthnumber<<" Means July"<<endl;
					break;
				case 8:
					cout<<monthnumber<<" Means August "<<endl;
					break;	
				case 9:
					cout<<monthnumber<<" Means September "<<endl;
					break;	
				case 10:
					cout<<monthnumber<<" Means October "<<endl;
					break;	
				case 11:
					cout<<monthnumber<<" Means November "<<endl;
					break;	
				case 12:
					cout<<monthnumber<<" Means December "<<endl;

			}
		}
};
int main()
{
	MonthYear monthYear;
	monthYear.input();
	monthYear.display();
}
