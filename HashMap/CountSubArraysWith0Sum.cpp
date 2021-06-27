#include<bits/stdc++.h>
using namespace std;
void printLargest(vector<int> &v1,int n){
    unordered_map<int,int> m1;
    m1[0]=1;
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v1[i];
        if(m1[sum]!=0)
        cnt+=m1[sum];
        m1[sum]++;
    }
    cout<<cnt;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    printLargest(v1,n);
}