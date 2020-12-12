//WAP to check whether a no is palindrome or not

#include<iostream>
#include<string.h>
using namespace std;
class palindrom{
	char str1[20],str2[20];
	int i,j,len=0,flag=0;
	public:
		void input();
		void display();
		
};
void palindrom::input()
{
	cout<<"Enter any String"<<endl;
	gets(str1);
}
void palindrom::display()
{
	len=strlen(str1) - 1;
	for(i=len,j=0;i>=0;i--,j++)
	str2[j]=str1[i];
	if(strcmp(str1,str2))
	flag=1;
	if(flag==1)
	cout<<str1<<"is not a palindrome";
	else
	cout<<str1<<"is a palindrome";
}
int main()
{
	palindrom palin;
	palin.input();
	palin.display();
}

