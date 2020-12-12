#include <iostream>
#include <cstdlib>
using namespace std;
class convert_string_int{
	public:
		void convert();
};
void convert_string_int::convert()
{
	char str[] = "456";
    int num =atoi(str);
    cout << "num = " << num;
}

int main()
{
	convert_string_int con;
	con.convert();
}
