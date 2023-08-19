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
/*int lenght(node* head)
{
    node* ptr=head;
    int count=1;
    while(ptr!=NULL)
    {
        ptr=ptr->link;
        count++;
    }
    return count;

}
node* get_middle(node* head )
{    
    node* temp=head;
    int len=lenght(head);
    int ans=(len/2);
    int count=1;
    while(count<ans)
    {
       temp=temp->link;
       count++;

    }
    return temp;
}

*/
node* get_middle_pro(node* head)
{

   /* if(head==NULL || head->link==NULL)
    {
        return head;
    }*/
    if(head->link!=NULL)
    {
        head=head->link;
        return head;
    }
    node* pro=head->link;
    node* noob=head;
    while(pro!=NULL )
    {
     pro=pro->link;
     if(pro!=NULL)
     {
        pro=pro->link;
        noob=noob->link;

     }
    }
    return noob;
}
int main()
{
    node* node1=new node(8);
    node* head = node1;
    insert_at_start(head,6);
    insert_at_start(head,5);
    node* ans= get_middle_pro( head);
     //node* ans=get_middle( head );
       cout<<"mid->data  = "<<ans->data;

       return 0;
       



}