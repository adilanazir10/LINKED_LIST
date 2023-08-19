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
    ~node(){
        int val=this->data;
       if(this->next!=NULL)
       {
        
        delete next;
        next=NULL;
       }
       //cout<<" memory free for the "<<val;
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
void deletion(node* tail,int element){
   
    if(tail==NULL)
    {
        cout<<" please try again list is empty"<<endl;
        return ;
    }
    else
    {
        node* prevs=tail;
        node* cur=prevs->next;
        while(cur->data!=element)
        {
            prevs=cur;
            cur=cur->next;

        }
        prevs->next=cur->next;
        if(tail==cur)
        {
            tail=prevs;
        }
        prevs->next=NULL;
        delete cur;
    }
}
int main()
{
    node* tail =NULL;
    insert(tail,8,6);
    insert(tail,6,3);
    insert(tail,3,9);
    insert(tail,6,66);
   // print(tail);
    deletion(tail,6);
     print(tail);

    return 0;

}