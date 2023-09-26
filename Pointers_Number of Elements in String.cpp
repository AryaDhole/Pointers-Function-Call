//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int main()
{
    int count=0;
    char str[100];
    cout<< "Enter Name : "<<endl ;
    cin.get(str,100);
    char *ptr=&str[0];

    while((*ptr)!='\0')
    {
        if((*ptr)!=' ')
        {
            count++;
        }
        ptr++;
    }

    cout<< count;
return 0;
}
