#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    
    Node (int data)
    { this->data=data;
      this->next=NULL;}
      };
      


void insertAtHead(Node * &head,int n)
{ 
   Node *temp= new Node(n);
   temp->next=head;
   head=temp;
   }
   
void insertAtTail(Node * &tail,int n)
{ 
   Node *temp= new Node(n);
   tail->next=temp;
   tail=temp;
   }
   
void print(Node * &head)
{
  Node * temp= head;
  while(temp!=NULL)
  {
    cout<<temp->data<<" ";
    temp=temp->next;
  }


}
      
    
int main()
{
   Node *node1= new Node(5);
   Node * tail=node1;
   Node * head=node1;
   insertAtHead(head,10);
   insertAtHead(head,15);
   insertAtTail(tail,2);
   
   print(head);
   
   
   
   
   
   return 0;
}


