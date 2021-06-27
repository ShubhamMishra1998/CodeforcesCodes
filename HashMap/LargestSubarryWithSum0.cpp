#include<bits/stdc++.h>
using namespace std;
void printLargest(vector<int> &v1,int n){
    unordered_map<int,int> m1;
    int maxLen=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v1[i];
        if(sum==0)
        maxLen=i+1;
        if(m1[sum]!=0)
        maxLen=max(maxLen,i+1-m1[sum]);
        if(m1[sum]==0)
        m1[sum]=i+1;
    }
    cout<<maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    printLargest(v1,n);
}