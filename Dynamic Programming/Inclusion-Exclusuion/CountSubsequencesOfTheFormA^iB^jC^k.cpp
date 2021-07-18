#include<bits/stdc++.h>
using namespace std;
int countSubsequences(string s1) {
      int a=0,ab=0,abc=0;
      for(char ch:s1){
        if(ch=='a'){
            a=2*a+1;
        }
        else if(ch=='b'){
            ab=2*ab+a;
        }else{
            abc=2*abc+ab;
        }
      }
      return abc; 
}
int main(){
    string s1;
    cin>>s1;
    int n=countSubsequences(s1);
    cout<<n;
}