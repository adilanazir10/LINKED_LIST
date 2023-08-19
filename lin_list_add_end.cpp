#include<iostream>
using namespace std;

class node
{
  public:
  int data;
  node* link;
  node(int data)
  {
    this->data=data;
    this->link=NULL;
  }
};
void insert_at_end(node* &tail,int n)
{  
   
  // starge da  baaz banra da zarki 
  //che pa nazar ki mi saati drsra zama
    node* temp= new node(n);
    tail->link=temp;
    tail=temp;

  

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


{
  if(head==NULL|| head->link==NULL)
  {
    return head;
  }
  node* cur=head;
  node* prevs=NULL;
  node* frwrd=NULL;

    while(cur!=NULL)
    {
      frwrd=cur->link;
      cur->link= prevs;
     // frwrd=frwrd->link;
     prevs=cur;
     cur=frwrd;
      cur=cur->link;
      prevs=prevs->link;


    }
    return prevs;
}

int main()
{
    node* node1=new node(8);
   
    node* head=node1;
     node* tail=node1;
    insert_at_end(tail, 6);
    insert_at_end(tail, 3);
    insert_at_end(tail, 81);


      // print(head);
     
       return 0;

      
    

}
