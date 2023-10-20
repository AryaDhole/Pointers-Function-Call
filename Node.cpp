//Arya Dhole
//ENTC-A2
//22070123027
#include<iostream>
using namespace std;

class Node
{
   public:
   int data;
   Node *next;//Node is variable storing some address
   
   Node()
   {
       data=0;
       next=NULL;
   } 
};

Node *head;

int AddAtBeginning(int data)
   {

   	Node *newnode = new Node;
   	newnode->data=data;
   	newnode->next=head;
   	head=newnode;
   }

void display()
   {

   	Node *temp=head;
   	while(temp!=NULL)
   	 {
   	 	cout<<temp->data<<endl;
   		temp=temp->next;
     }
   }
   
int main()
{
    Node *newnode1=new Node; //*newnode1 is next pointer 
    newnode1->data=10;
    
    Node *newnode2=new Node; //*newnode2 is next pointer 
    newnode2->data=20;
    
    Node *newnode3=new Node; //*newnode3 is next pointer 
    newnode3->data=30;
    
    head=newnode1;
    newnode1->next=newnode2;
    newnode2->next=newnode3;
    
    cout<<"Data "<< newnode1->data << " selfAddress " << newnode1 << " nextAddress " << newnode1->next <<endl;
    cout<<"Data "<< newnode2->data << " selfAddress " << newnode2 << " nextAddress " << newnode2->next <<endl;
    cout<<"Data "<< newnode3->data << " selfAddress " << newnode3 << " nextAddress " << newnode3->next <<endl;
    
    AddAtBeginning(40);
    display();
    return 0;
}
