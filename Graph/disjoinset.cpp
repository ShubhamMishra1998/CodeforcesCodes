#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    int Rank;
    Node *parent;
};
unordered_map<int,Node*> m1;
void makeSet(int vertex)
{
    for(int i=1;i<=vertex;i++)
    {
        Node *temp=new Node();
        temp->data=i;
        temp->Rank=0;
        temp->parent=temp;
        m1[i]=temp;
    }
}
Node * find(Node *child)
{
    Node *parent=child->parent;
    if(parent==child)
    return parent;
    child->parent=find(child->parent);
    return child->parent;
}
void Union(int a,int b)
{
     Node *x=m1[a];
     Node *y=m1[b];
     Node *p1=find(x);
     Node *p2=find(y);
     if(p1==p2)
     return;
     if(p1->Rank  > p2->Rank)
     p2->parent=p1;
     else if(p2->Rank>p1->Rank)
     p1->parent=p2;
     else
     {
         p2->parent=p1;
         p1->Rank++;
     }
}

int main()
{
   int vertex,edges;
   cin>>vertex>>edges;
   makeSet(vertex);
   int a,b;
   set<int> st;
   for(int i=0;i<edges;i++)
   {
       cin>>a>>b;
       Union(a,b);
   }
   for(int i=0;i<vertex;i++)
   {
       st.insert(m1[i]->parent->data);
   }
   cout<<st.size()<<endl;
   int x;
   for(int i=0;i<10;i++)
   {
       cin>>x;
       cout<<m1[x]->parent->data;
   }
}