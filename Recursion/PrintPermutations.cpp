#include<bits/stdc++.h>
using namespace std;
void printPermutations(string s1,int i){
	if(i==s1.length()){
		cout<<s1<<' ';
		return;
	}
	for(int j=i;j<s1.length();j++){
		swap(s1[i],s1[j]);
		printPermutations(s1,i+1);
		swap(s1[i],s1[j]);
	}
}
int main(){
	string s1;
	cin>>s1;
	printPermutations(s1,0);
}