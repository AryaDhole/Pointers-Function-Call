//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

class rectangle
{
    int length;
    int width;

    public:
    void value()
    {
     cout<< "Enter Length : "<<endl ;
     cin>>length;
     cout<< "Enter Width : "<<endl ;
     cin>>width;
    }
    
    float area()
    {
     float mul=length*width;
     return mul;
    }   
};

class cuboid:public rectangle //access specifier
{
    int height;
    void value1()
    {
       cout<< "Enter Height : "<<endl ;
       cin>>height;
    }
    
    
    public:
    float volume()
    {
     value1();
     float mul1=area()*height;
     return mul1;
    }   
    
};
int main()
{

    rectangle r1;
    cuboid c1;
    r1.value();
    c1.value();
    float result=r1.area();
    float result1=c1.volume();
    cout<<endl<<"Area is : "<<result;
    cout<<endl<<"Volume is : "<<result1;
    return 0;
}
