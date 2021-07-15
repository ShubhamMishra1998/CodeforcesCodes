#include<bits/stdc++.h>
using namespace std;
struct Node{
	char data;
	Node *children[26];
	int isEnd;
	Node(char ch){
		data=ch;
		for(int i=0;i<26;i++){
			children[i]=NULL;
			isEnd=0;
		}
	}

};
void insertWord(Node *root,string &s1){
	Node *pCrawl=root;
	for(int i=0;i<s1.length();i++){
		int index=s1[i]-'a';
		if(!pCrawl->children[index])
			pCrawl->children[index]=new Node(s1[i]);
		pCrawl=pCrawl->children[index];
	}
	pCrawl->isEnd++;
}
void printWords(Node *root,string s1){
	if(root->isEnd>0)
		cout<<s1<<endl;
	for(int i=0;i<26;i++){
		if(root->children[i]){
			s1+=root->children[i]->data;
			printWords(root->children[i],s1);
			s1.pop_back();
		}
	}
}
int main(){
   int n;
   cin>>n;
   Node *root=new Node('$');
   string word;
   for(int i=0;i<n;i++){
   	cin>>word;
   	insertWord(root,word);
   }
   printWords(root,"");
}