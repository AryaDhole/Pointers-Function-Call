//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int main()
{
    double var[3] ={1,2,3};
    int i;
    double *ptr= &var[0];
    for(i=0;i<3;i++)
    {
       cout<< *ptr<< " " << ptr << endl;
       ptr++;
    }
 return 0;
}
