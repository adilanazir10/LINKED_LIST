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
 void  insert_at_end(node* &tail,int data)
 {
    node* temp=new node(data);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;

 }
 // DELETION FUNCTIONS //AT START//AT END//AT MID
 void delet_d_at_head(node* &head)
 {
      node* ptr=head;
     ptr=ptr->next;
     ptr=ptr->next;
     node* temp=ptr;
     ptr->prev=temp->prev;

     delete temp;


    /*if(posi==1)
    {
       node* temp= head;
       head=head->next;
       delete temp;
    }*/


    /// AT MID
   /*else{
    node*temp =head;
    int count=1;
    while (count<posi)
    {
       temp=temp->next;
       count++;
       
    }
    node* d_node=temp;
    temp=temp->next;
    d_node->next=NULL;
    delete d_node;
    }*/

 }
 int main()
 {
    node* node1= new node(1);
    node* head =node1;
    node* tail=node1;
    insert_at_end(tail,2);
    insert_at_end(tail,3);
    insert_at_end(tail,4);
    insert_at_end(tail,5);
    insert_at_end(tail,6);
///   printing///
   print(head);
  // cout<<" deletion at strat"<<endl;
  // delet_d_at_head(head,1);
   //print(head);  
   cout<<" deletion at mid"<<endl;
   delet_d_at_head(head);
   print(head);  


  return 0;

 }