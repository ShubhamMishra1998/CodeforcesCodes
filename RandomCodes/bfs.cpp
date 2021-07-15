#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
	Node(int x){
		data=x;
		left=NULL;
		right=NULL;
	}

};
void bfs(Node *root){
	queue<Node*> q1;
	q1.push(root);
	while(!q1.empty()){
		int c=q1.szie();
		while(c--){
			Node *temp=q1.front();
			q1.pop();
			cout<<temp->data<<' ';
			if(temp->left)
				q1.push(temp->left);
			if(temp->right)
				q1.push(temp->right);
		}
		cout<<endl;
	}
}

int main(){
    Node *root=NULL;
    int n,x;
    cin>>n;

}

int diameter(Node *root){
	if(!root)
		return 0;
	int lh=height(root->left);
	int rh=height(root->right);
	int ld=diameter(root->left);
	int rd=diameter(root->right);
	return max(lh+rh+1,max(ld,rd));
}
void print(Node *root,int l,){
	if(!root)return;

}
Node *createTree(int *a,int l,int r){
	if(l>r)return NULL;
	int mid=(l+r)/2;
	Node *root=new Node(a[mid]);
	root->left=createTree(a,l,mid-1);
	root->right=createTree(a,mid+1,r);
	return root;
}


Node *createTree(int *pre,int *inorder,ib){

}