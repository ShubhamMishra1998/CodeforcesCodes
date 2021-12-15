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
 
bool getNodeToRootPath(Node *root,int x,vector<int> &ans){
	if(root->data==x){
		ans.push_back(x);
		return true;
	}
	for(Node *child:root->children){
		bool f=getNodeToRootPath(child,x,ans);
		if(f==true){
			ans.push_back(root->data);
			return true;
		}
	}
	return false;
}

int getDist(Node *root,int x,int y){
	vector<int> first,second;
	getNodeToRootPath(root,x,first);
	getNodeToRootPath(root,y,second);
	
	int i=first.size()-1;
	int j=second.size()-1;
	while(i>=0 and j>=0 and first[i]==second[j]){
         i--;
         j--;
	}
	i++;
	j++;
	return i+j;
}

int main(){
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	 int x,y;
	 cin>>x>>y;
     Node *root=createTree(a,n);
     int dist=getDist(root,x,y);
     cout<<dist;
     
}