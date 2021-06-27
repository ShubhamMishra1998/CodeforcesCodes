#include<bits/stdc++.h>
using namespace std;
int LargestSubArray(vector<int> &v1,int n,int k){
    int maxLen=0,sum=0;
    unordered_map<int,int> m1;
    for(int i=0;i<n;i++){
      sum+=v1[i];
      int y=sum-k;
      if(y==0)
        maxLen=i+1;
      else if(m1[y]>0)
      maxLen=max(maxLen,i-m1[sum]+1);
      else
      m1[sum]=i+1;
    }
    return maxLen;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    int k;
    cin>>k;
    cout<<LargestSubArray(v1,n,k);
}