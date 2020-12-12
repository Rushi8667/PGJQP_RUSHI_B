#include <iostream>
using namespace std;
class Second_largestno{
	int n, num[50], largest, second,i;
	public:
		void input();
		void display();
};
void Second_largestno::input()
{
	cout<<"Enter Size Of Array"<<endl;
	cin>>n;
	cout<<"Enter Element Of Array"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}	
}
void Second_largestno::display()
{
	   if(num[0]<num[1]){ 
      largest = num[1];
      second = num[0];
   }
   else{ 
      largest = num[0];
      second = num[1];
   }
   for (int i = 2; i< n ; i ++) 
   {
      if (num[i] > largest)
	  {
         second = largest;
         largest = num[i];
      }
      else if (num[i] > second && num[i] != largest) {
         second = num[i];
      }
   }
   cout<<"Second Largest Element in array is: "<<second;	
}
int main()
{
	Second_largestno number;
	number.input();
	number.display();
}
