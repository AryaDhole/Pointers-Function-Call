//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;
void change(int *p,int*q);//Function Declaration

int main()
{
    int a=10,b=0;
    int*p=&a;
    int*q=&b;
    cout<<"Before Swap : "<<*p<<" "<<*q<<endl;

    change(p,q);//Function Call

    cout<<"After Swap :"<<*p<<" "<<*q<<endl;
return 0;
}
void change(int *p, int *q)//Function Defination
{
    int temp=*p;
    *p=*q;
    *q=temp;
}

