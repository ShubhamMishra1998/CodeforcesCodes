#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll LargestArea(ll *a,ll n){
	stack<ll> st;
	ll maxArea=0;
	int i;
	for(i=0;i<n;){
		if(!st.empty()&&a[i]<a[st.top()]){
             ll ht=a[st.top()];
             st.pop();
             if(st.empty()){
                maxArea=max(maxArea,i*ht);
             }
             else{
             	maxArea=max(maxArea,ht*(i-st.top()-1));
             }
		}else{
			st.push(i);
			i++;
		}
	}
	while(!st.empty()){
		ll ht=a[st.top()];
		st.pop();
		if(st.empty()){
            maxArea=max(maxArea,i*ht);
		}
		else{
           maxArea=max(maxArea,ht*(i-st.top()-1));
		}

	}
	return maxArea;
}
int main(){
	while(1){
		ll n;
		cin>>n;
		if(n==0)break;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<LargestArea(a,n)<<'\n';
	}
}