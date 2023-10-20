#include<iostream>
using namespace std;
int main()
{
    float ratio,numerator,denominator;
    cout <<"Enter Numerator"<<endl;
    cin >>numerator;
    cout <<"Enter Denominator"<<endl;
    cin >>denominator;
    
    try
    {
        if(denominator==0)
        throw("Division by 0 not possible");
        ratio=numerator/denominator;
        cout<<"Ratio is : "<<ratio;
    }
    
    catch(const char *msg)
    {
        cout<<msg;
    }
    
    return 0;
}
