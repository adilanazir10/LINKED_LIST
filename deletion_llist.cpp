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
void insert(node* &head,int data)
{
 node* temp= new node(data);
          temp->link=head;
          head=temp;

}
void print (node* head)
{
    node* ptr=head;
    while(ptr!=NULL)
    {
         cout<<" "<<ptr->data;
         ptr=ptr->link;

    }
}
void deletion_at_head(node* &head,int position)
{
     if(position==1){
         node* temp=head;
         head=head->link;
         temp->link=NULL;
         delete temp;}
        /* else
         {
            node* ptr=head;
            int count =1;
            while(count<position)
            {
                ptr=ptr->link;
                count++;

            }
             node* temp=ptr;
             ptr= ptr->link;
             temp->link=NULL;
             delete temp;

         }

    */
}

int main()
{
  node* node1=new node(8);
  node* head=node1;
   insert(head,9);
   insert(head,6);
   insert(head,2);
   insert(head,1);
   print(head);
   cout<<" delete"<<endl;
   deletion_at_head(head,1);

   print(head);
    deletion_at_head(head,2);
    print(head);
   



}