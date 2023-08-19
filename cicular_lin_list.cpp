#include<iostream>
using namespace std;
class node
{ 
    public:

    int data;
    node* next;

    //constructor
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }

};
void insert(node* &tail,int element,int d) // insert at end and head 
{
if( tail==NULL)
{
    node * temp=new node(d);
    tail=temp;
    temp->next = temp;
}
else
{
    node* cur=tail;
    while(element!=cur->data)
    {
        cur=cur->next;
    }
    node* temp=new node(d);
    temp->next=cur->next;
    cur->next=temp;
}
}
void print( node* tail)
{
    node* temp=tail;
    do
    {
       cout<<tail->data<<" "<<endl;
       tail=tail->next ;
    } while (tail!= temp);
    
}
int main()
{
   node* tail =NULL;
   insert(tail,8,6);
    //print(tail);
    insert(tail,6,3);
     //print(tail);
     insert(tail,3,9);
  // print(tail);
   insert(tail,6,66);
     print(tail);
   return 0;

}