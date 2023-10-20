//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

void reversal(int n)
{
    if(n !=0)
    {
    	cout<<(n%10);
        reversal(n/10);
        
    }
}

int main()
{
 int n;
 cout<<"Enter the number: ";
 cin>>n;
 reversal(n);
 return 0;
}

