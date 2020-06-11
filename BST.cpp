#include<bits/stdc++.h>
using namespace std;
//creating binary search tree;
class node
{
 public:
  int x;
  node* left;
  node* right;
  node(int d)
  {
   x=d;
   this->left=NULL;
   this->right=NULL;
  }
};
void Inordertraversal(node* root)
{
 if(root!=NULL)
 {
  Inordertraversal(root->left);
  cout<<root->x<<" ";
  Inordertraversal(root->right);
  
 }
}
void insertusing_loop(node** root,int key)
{
 node* t;
 node* prev;
 t=*root;
 prev=t;
 
 while(t!=NULL)
 {
  prev=t;
  if(t->x==key)
  return;
  if(key<t->x)
  t=t->left;
  else
  t=t->right;
  
 }
 node* p=new node(key);
 if(prev==NULL)
 {
  *root= p;
  return;
 }
 if(key<prev->x)
 prev->left=p;
 else
 prev->right=p;
 
}
node* insertusing_recurrsion(node* root,int key)
{
 node* t;
 
 if(root==NULL)
 {
 t=new node(key);
 return t;
 }
 
 if(root->x==key)
 return root;
 
 if(key<root->x)
 root->left=insertusing_recurrsion(root->left,key);

 else
 root->right= insertusing_recurrsion(root->right,key);
 return root;
 
}
int main()
{
 node* head=NULL;
 insertusing_loop(&head,56);
 insertusing_loop(&head,69);
 insertusing_loop(&head,48);
 insertusing_loop(&head,4);
 insertusing_recurrsion(head,25);

 insertusing_recurrsion(head,19);
 insertusing_recurrsion(head,5); cout<<" hgi"<<endl;
 Inordertraversal(head);
 
 
 
}
