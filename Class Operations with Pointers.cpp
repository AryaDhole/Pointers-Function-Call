//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

class cube
{
    int length;
    int height;
    int side;
    int *p=&length,*q=&height,*r=&side;

    void value()
    {
     cout<< "Enter Length : "<<endl ;
     cin>>length;
     cout<< "Enter Height : "<<endl ;
     cin>>height;
     cout<< "Enter Side : "<<endl ;
     cin>>side;
     
    }

    public:
    float calculate()
    {
     value();   // variables in value function remain private
     float mul=(*p)*(*q)*(*r);
     return mul;
     
    }   
};

int main()
{

    cube c1;
    float result=c1.calculate();
    cout<<endl<<"Volume is : "<<result;
    return 0;
}
