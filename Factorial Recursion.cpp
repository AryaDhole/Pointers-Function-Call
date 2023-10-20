//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n>1)
    {
        return (n*factorial(n-1));
    }
    
    else
    {
        return 1;
    }
}

int main()
{
 int n,result;
 cout<<"Enter the number: ";
 cin>>n;
 result=factorial(n);
 cout<<result;
 return 0;
}
