#include<bits/stdc++.h>
using namespace std;
string table[] = { " ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz" };
void printCombinations(string s1,string s2){
	if(s1.length()==0){
		cout<<s2<<endl;
		return;
	}
	int j=s1[0]-'0';
	s1.erase(s1.begin());
	string s=table[j];
	for(char ch:s){
		printCombinations(s1,s2+ch);
	}
}
int main(){
     string s1;
     cin>>s1;
     printCombinations(s1,"");
}