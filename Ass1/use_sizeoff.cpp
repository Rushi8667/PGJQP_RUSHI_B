//WAP to find the size of data types in C (Hint: use sizeof() operator)


#include<iostream>
using namespace std;
class datatype
{
	int intType;
    float floatType;
    double doubleType;
    char charType;
	public:
		void display()
		{
		cout<<"value of int "<<sizeof(int)<<"bytes"<<endl;
		cout<<"value of Char "<<sizeof(char)<<"bytes"<<endl;
		cout<<"value of Float "<<sizeof(float)<<"bytes"<<endl;
		cout<<"value of Double "<<sizeof(double)<<"bytes"<<endl;
       
		}
};
int main()
{
	datatype dt;
	dt.display();
}
