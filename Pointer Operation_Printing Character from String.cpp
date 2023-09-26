//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int main()
{
    char str[100];
    cout<< "Enter Name : "<<endl ;
    cin.get(str,100);
    char *ptr=&str[0];
    cout<< *ptr<<' ';

    while((*ptr)!='\0')
    {
        
        if((*ptr)==' ')
        {
            cout<< *(ptr+1)<<' ';
        }
        ptr++;
    }

return 0;
}
