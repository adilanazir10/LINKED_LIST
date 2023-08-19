#include<iostream>
using namespace std;
class node   // to create node
{
    public:

    int data;
    node* link;

    node(int n)    // constructor to initialixes values to the data and link data memebers of class node
    {
        this->data=n;
        this->link=NULL;
    }


};
void insert_at_start(node* &head,int num)   // fuction to create new node and attached it
    {
         
          node* temp= new node(num);
          temp->link=head;
          head=temp;
           
    }
    void print(node* head)
{
      node* ptr=head;
        while(ptr!=NULL)
        {
           cout<<" "<<ptr->data;
           ptr=ptr->link;
        }
}

int main()
{
    node* node1= new node(9);
    node* head = node1;
      insert_at_start(head,3);  // calling
      insert_at_start(head,9);
      insert_at_start(head,0);
      insert_at_start(head,4);
    
    print(head);    //calling print function 

    
   

    return 0;
}