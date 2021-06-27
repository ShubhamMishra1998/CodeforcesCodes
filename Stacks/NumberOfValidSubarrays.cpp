#include<bits/stdc++.h>
using namespace std;
int Count1(vector<int> &v1,int n){
    vector<int> ans;
    stack<int> st;
    for(int i=n-1;i>=0;i--){
        if(st.empty()){
            st.push(i);
            ans.push_back(-1);
        }else{
            while(!st.empty() and v1[i]<=v1[st.top()])
            st.pop();
            if(st.empty())
            ans.push_back(-1);
            else
            ans.push_back(st.top());
            st.push(i);
        }
    }
    int ct=0;
    reverse(ans.begin(),ans.end());
    for(int i=0;i<n;i++){
        if(ans[i]==-1)
        ct+=(n-i);
        else{
            ct+=(ans[i]-i);
        }
    }
    return ct;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    cout<<Count1(v1,n);
}