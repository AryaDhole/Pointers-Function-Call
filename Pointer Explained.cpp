//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int main()
{
    int var =10;
    int *ptr=&var;

    cout<< var <<endl;   //Value of var
    cout<< *ptr <<endl;  //Value at address given y ptr
    cout<< &var <<endl;  //Address of var
    cout<< ptr <<endl;   //Value of ptr
    cout<< &ptr <<endl;  //Address of var
 return 0;
}
