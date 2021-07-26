#include<bits/stdc++.h>
using namespace std;
class Node{
public:
	int data;
	Node *left;
	Node *right;
	Node(int data){
		this->data=data;
		left=NULL;
		right=NULL;
	}
};
Node *createTree(int *a,int &i,int n){
	if(i>=n)return NULL;
	if(a[i]==-1){
		i++;
		return NULL;
	}
	Node *root=new Node(a[i++]);
	root->left=createTree(a,i,n);
	root->right=createTree(a,i,n);
	return root;
}
void preOrder(Node *root){
	if(!root)return;
	cout<<root->data<<' ';
	preOrder(root->left);
	preOrder(root->right);
}
int getSize(Node *root){
	if(!root)return 0;
	int l=getSize(root->left);
	int r=getSize(root->right);
	return l+r+1;
}
int getSum(Node *root){
	if(!root)return 0;
	int l=getSum(root->left);
	int r=getSum(root->right);
	return l+r+root->data;
}
int getMax(Node *root){
	if(!root)return INT_MIN;
	int l=getMax(root->left);
	int r=getMax(root->right);
	return max(l,max(r,root->data));

}
int getHeight(Node *root){
	if(!root)return 0;
	int l=getHeight(root->left);
	int r=getHeight(root->right);
	return max(l,r)+1;
}
int main(){
	int n;
	cin>>n;
	int a[n];
	string s1;
	for(int i=0;i<n;i++){
		cin>>s1;
		if(s1=="n")
			a[i]=-1;
		else
			a[i]=stoi(s1);
	}
	int i=0;
	Node *root=createTree(a,i,n);
	int size=getSize(root);
	int sum=getSum(root);
	int max=getMax(root);
	int heigth=getHeight(root);
	cout<<size<<'\n'<<sum<<'\n'<<max<<'\n'<<heigth-1;
}