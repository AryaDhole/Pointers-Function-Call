//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int main()
{
   
    unsigned int m;
    cout<< "Enter the position : "<<endl ;
    cin>> m;
    unsigned int var[10] ={12,23,54,44,75,62,71,81,92,10};
    unsigned int *ptr = &var[0];
    if(m<11)
    {
        cout<< *(ptr+(m-1)) <<endl ;
    }
    
return 0;
}
