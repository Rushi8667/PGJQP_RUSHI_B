# include <iostream>
using namespace std;
class calculater_switch
{
    char op;
    float num1, num2;
    public:
    	void include()
    	{
         cout << "Enter operator either + or - or * or /: "<<endl;
         cin >> op;
         cout << "Enter two operands:"<<endl;
         cin >> num1 >> num2;
        }
    void display()
    {
    switch(op)
    {
        case '+':
            cout <<"Addition="<<num1+num2;
            break;

        case '-':
            cout <<"Substraction="<<num1-num2;
            break;

        case '*':
            cout <<"Multipliction="<<num1*num2;
            break;

        case '/':
            cout <<"Division="<<num1/num2;
            break;

        default:
            cout << "Error! operator is not correct";
            break;
        }
    }
};
int main()
{
	calculater_switch cal;
	cal.include();
	cal.display();
}

