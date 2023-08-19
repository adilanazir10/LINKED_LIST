#include<iostream>
using namespace std;
/*
void insert_end(node* head,int data)
{
    node* ptr=head;
    node* temp= new node(data);
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    ptr->link=temp;

}
//////////////////
void insert_at_nth(node* &head,int data,int position)

{
    // to insert at first poition we cant do it by this function
    if( position==1)
    {
        insert_at_start(head,data);
        return ;
    }
    node* ptr=head;
    int count=1;
    while(count<position)
    {
        ptr=ptr->link;
        count++;
    }
    node* node_to_insert=new node(data);
    node_to_insert->link=ptr->link;
    ptr->link=node_to_insert;
}
//////////////
void insert_at_start(node* &head,int num)   // fuction to create new node and attached it
    {
         
          node* temp= new node(num);
          temp->link=head;
          head=temp;
           
    }
    //////////////////
    void insert_at_end(node* &tail,int n)
{  
   
  // starge da  baaz banra da zarki 
  //che pa nazar ki mi saati drsra zama
  node* temp= new node(n);
 tail->link=temp;
 tail=temp;

}
//////////////////
void print(node* head)
{
      node* ptr=head;
        while(ptr!=NULL)
        {
           cout<<" "<<ptr->data;
           ptr=ptr->link;
        }
        //////////
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
}*/