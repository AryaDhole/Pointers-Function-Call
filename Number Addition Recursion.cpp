//Arya Dhole
//ENTC-A2
//22070123027

#include<iostream>
using namespace std;

int add(int n)
{
    if(n>0)
    {
        return (n+add(n-1));
    }
    
    else
    {
        return 0;
    }
}

int main()
{
 int n,result;
 cout<<"Enter the number: ";
 cin>>n;
 result=add(n);
 cout<<result;
 return 0;
}


