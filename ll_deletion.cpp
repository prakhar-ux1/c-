#include<iostream>
using namespace std;
class node
{
 public:
  int data;
  node* nxt;
};
void push_node(node** head, int d)
{
 node* new_node= new node();
new_node->data=d;
  new_node->nxt=NULL;
 if(*head==NULL)
 {

  *head=new_node;
 }
 node* temp=*head;
 while(temp->nxt!=NULL)
 {
  temp=temp->nxt;
 }
 temp->nxt=new_node;
}
void print (node* n)
{
 while(n!=NULL){

 cout<<n->data<<" ";
 n=n->nxt;
 }
}
void deletion(node** head, int key)
{
 node* temp =*head,*q;


if(temp!=NULL&&temp->data==key)
 {
  *head=temp->nxt;
  delete(temp);
  return;
 }
 while(temp!=NULL&&temp->data!=key)
 {
  q=temp;
  temp=temp->nxt;
 }
 if(temp==NULL)
 return;

q->nxt=temp->nxt;
delete(temp);
}
void deletion_using_position(node** head ,int pos)
{
 node* temp=*head,*p;
 int x=0;
 while(x!=pos &&temp!=NULL)
 {
  p=temp;
  temp=temp->nxt;
  x++;
 }
 if(temp==NULL)
 return;
 p->nxt=temp->nxt;


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
 print(head);
 cout<<endl;
 push_node(&head, 89);
 push_node(&head, 87);
 push_node(&head, 39);

 print(head);
 cout<<endl;

 deletion(&head,50);
 print(head);
 cout<<endl<<"now using position";
 deletion_using_position(&head,8);
 print(head);
}
