#include<bits/stdc++.h>
using namespace std;
int LargestSubArray(vector<int> &v1,int n,int k){
    int count=0,sum=0;
    unordered_map<int,int> m1;
    m1[0]=1;
    for(int i=0;i<n;i++){
      sum+=v1[i];
      int y=sum-k;
      if(m1[y]>0)
      count+=m1[y];
      m1[sum]++;
    }
    return count;
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