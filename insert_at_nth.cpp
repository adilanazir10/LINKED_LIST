#include<iostream>
using namespace std;
class node
{ 
    public:

    int data;
    node* link;

    //constructor
    node(int data)
    {
        this->data=data;
        this->link=NULL;
    }

};
void insert(node* &tail, int d)
{
    node* temp=new node(d);
    tail->link=temp;
    tail=temp;

}
void print(node* &head)
{
    node* ptr=head;
   
    while(ptr!=NULL)
    {
         cout<<" "<<ptr->data;
         ptr=ptr->link;

    }
}

void insert_at_start(node* &head,int num)   // fuction to create new node and attached it
    {
         
          node* temp= new node(num);
          temp->link=head;
          head=temp;
           
    }
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

int main()
{
   node* node1= new node(7);
   node* head=node1;
   node* tail=node1;
   insert(tail,6);
   insert(tail ,3);
   insert(tail ,5);
   insert(tail ,5);
   insert(tail ,7);
   print(head);
   cout<<endl;
  // insert_at_nth(head,33,1);  // 1st poition 
   //cout<<" "<<endl;
  // print(head);
   //insert_at_nth(head,33,3);  // 3rd poition 
   //cout<<" "<<endl;
   insert_end(head, 99);
   print(head);   
   return  0;
}