#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string prev="1";
	cout<<prev<<endl;
	for(int i=1;i<n;i++){
		char p=prev[prev.size()-1];
		string s1="";
	    for(int i=0;i<prev.length()*2;i++){
	    	if(p=='9'){
	    		s1+='1';
	    		p='1';
	    	}else{
	    		s1+=(char)(p+1);
	    		p=(char)(p+1);
	    	}
	    }
	    cout<<s1<<endl;
	    prev=s1;
	}
}