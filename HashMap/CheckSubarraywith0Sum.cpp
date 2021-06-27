#include<bits/stdc++.h>
using namespace std;
bool printLargest(vector<int> &v1,int n){
    unordered_map<int,int> m1;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v1[i];
        if(sum==0)
        return true;
        if(m1[sum]!=0)
        return true;
        if(m1[sum]==0)
        m1[sum]++;
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i=0;i<n;i++)
    cin>>v1[i];
    if(printLargest(v1,n))
    cout<<"YES"<<'\n';
    else
    cout<<"NO"<<'\n';

}