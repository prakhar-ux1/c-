#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
 int temp=a;
 a=b;
 b=temp;
}
void dip(int *f,int x)
{ int i;
 for(i=0;i<x;i++)
 {
  cout<<f[i]<<"\t";
 }
 cout<<endl;
}
int main()
{ int t,i,j,flag;
  cin>>t;
 int *a =new int[t];
 for(i=0;i<t;i++)
 {cin>>a[i];
 }
 for(i=(t-1);i>0;i--)
 { flag =0;
  for(j=0;j<i;j++)
  {
   if(a[j]>a[j+1])
   {
    swap(a[j],a[j+1]);
   flag=1;

   }
   dip(a,t);
  }
  if(flag==0)
  break;
  cout<<"\nHi";
 }
 
}
