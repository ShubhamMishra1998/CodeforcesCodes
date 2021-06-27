#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll printCount(ll n){
	if(n==0||n==1)return 1;
	else if(n==2)return 2;
	return printCount(n-1)+printCount(n-2)+printCount(n-3);
}
int main(){
    ll n;
    cin>>n;
    cout<<printCount(n);
}