#include <iostream>
using namespace std;
class vowels{
	char ch;
	public:
void check()
{
    char ch;
    cout<<"Enter any Alpabet\n";
    cin>>ch;
    switch(ch)
	{
	case 'a':
    cout<<ch<<" is a vowel";
    break;
    case 'e':
    cout<<ch<<" is a vowel";
    break;
    case 'i':
    cout<<ch<<" is a vowel";
    break;
    case 'o':
    cout<<ch<<" is a vowel";
    break;
    case 'u':
    cout<<ch<<" is a vowel";
    break;
    case 'A':
    cout<<ch<<" is a vowel";
    break;
    case 'E':
    cout<<ch<<" is a vowel";
    break;
    case 'I':
    cout<<ch<<" is a vowel";
    break;
    case 'O':
    cout<<ch<<" is a vowel";
    break;
    case 'U':
    cout<<ch<<" is a vowel";
    break;
    default:
    cout<<ch<<" is a consonant";
    break;
    }
}
};
int main()
{
	vowels vow;
	vow.check();
}
