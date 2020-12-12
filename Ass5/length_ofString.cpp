#include <iostream>
using namespace std;
class length_ofstring{
	public:
		void calculate();
};
void length_ofstring::calculate()
{
    string str = "C++ Programming";
    cout << "String Length = " << str.length();	
}
int main()
{
	length_ofstring length;
	length.calculate();
	
}
