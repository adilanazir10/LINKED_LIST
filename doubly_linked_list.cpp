#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;

  node(int data)
  {
    this->data=data;
    this->next=NULL;
    this->prev=NULL;

  }
  
};
// to count length
int length_of_list(node* head)
{
   node* temp=head;
   int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;

    }
    return len;
}
////////
 void print(node* head)
 {
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<" "<<temp->data;
        temp=temp->next;

    }
    cout<<endl;
 }
 //insert at start;
 void insert_at_head(node* &head,int data)
 {
    node* temp=new node(data);
     temp->next=head;
     head->prev=temp;
     head=temp;
 }
 ////////inseert at end
 void  insert_at_end(node* &tail,int data)
 {
    node* temp=new node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;

 }
 void insert_at_mid(node* &head,int posi,int data)
 {
   node* node_to_insert= new node(data);
   node* temp=head;
   
   int count =1;
   while(count<posi-1)
   {
      temp=temp->next;
     

      count++;
   }
   
   node_to_insert->next =temp->next;
   temp->next->prev=node_to_insert;
   node_to_insert->prev=temp;
   temp->next=node_to_insert;




 }

 int main()
 {
    node* node1= new node(3);
    node* head=node1; 
    node* tail=node1;
     insert_at_head(head,7);
     insert_at_head(head,9);
     
      print(head);
     insert_at_head(head,8);
     print(head);
     cout<<endl;
      cout<<" length is"<<length_of_list(head)<<endl;
       insert_at_end(tail,33);
       print(head);
       cout<<" insert at mid"<<endl;
        insert_at_mid(head,3,55);
        print(head);

    return 0;

 }
    