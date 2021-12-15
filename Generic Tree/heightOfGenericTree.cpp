#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	vector<Node*> children;
	Node(int data){
		this->data=data;
	}
};
Node *createTree(vector<int> a,int n){
	stack<Node*> st;
	Node *root=NULL;
	for(int i=0;i<n;i++){
		if(a[i]==-1)
			st.pop();
		else{
			Node *temp=new Node(a[i]);
			if(st.empty()){
                root=temp;
			}else{
				st.top()->children.push_back(temp);
			}
			st.push(temp);
		}
	}
	return root;
}
int getHeight(Node *root){
	
	int ht=0;
	for(Node *child:root->children){
		ht=max(ht,getHeight(child));
	}
	return ht+1;
}
int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
     Node *root=createTree(a,n);
     int ht=getHeight(root);
     cout<<ht-1;
}