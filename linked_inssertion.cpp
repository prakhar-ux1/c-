#include<iostream>
using namespace std;

class node
{
 public:
  int data;
  node *nxt;
  
};
void print (node* n)
{
 while(n!=NULL){

 cout<<n->data<<" ";
 n=n->nxt;
 }
}
node* insert_at_front(node* head ,int d)
{
 node *x=new node();
 x->data=d;
x->nxt=head;
head=x;
return head;
 }
void insert_at_end(node** head,int d)// using doble pointer
{
 node *x =new node();
 x->data=d;
 x->nxt=NULL;
 
 node *last=*head;
   if(*head==NULL)
   *head=x;

while(last->nxt!=NULL)
{
 last=last->nxt;
}
last->nxt=x;
return;

}
node* insert_the_end(node* head,int d)// return a copy head using simple pointer
{
 node* mew =new node();
 mew->data=d;
 mew->nxt=NULL;
 node* last = head;
 while(last->nxt!=NULL)
 last=last->nxt;
 last->nxt=mew;
 return head;
}
 

int main()
{
 node *head = NULL;
 node *second =NULL;
 node *third =NULL;
 head =new node();
 second = new node();
 third = new node();
 head->data=20;
 head->nxt=second;
 second->data=30;
 second->nxt= third;
 third->data= 50;
 third->nxt=NULL;
head=insert_at_front(head,89);


 print(head);
 cout<<endl;
 print(insert_the(head,98));
insert_at_end(&head,67);
cout<<"hi";
print(head);
}

