//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

void reversal(char *str)
{
    if(*str !='\0')
    {
        reversal(str+1);
        cout<<*str;
    }
}

int main()
{
 char str[25];
 cout<<"Enter the string: ";
 cin>>str;
 reversal(str);
 return 0;
}

