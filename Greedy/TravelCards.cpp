#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll,pair<string,string>> pii;
ll travelCards(){
	ll n,a,b,k,f;
    cin>>n>>a>>b>>k>>f;
    string prev_dist="";
    map<pair<string,string>,ll>m1;
    for(int i=0;i<n;i++){
    	string start_dist,end_dist;
    	cin>>start_dist>>end_dist;
    	ll price;
    	if(prev_dist==start_dist){
    		price=b;
    	}else{
    		price=a;
    	}
    	prev_dist=end_dist;
    	if(start_dist>end_dist)
    		swap(start_dist,end_dist);
    	m1[make_pair(start_dist,end_dist)]+=price;

    }
    vector<ll> v;
    ll total_cost=0;
    for(auto it:m1){
    	v.push_back(it.second);
    	total_cost+=it.second;
    }
    sort(v.rbegin(),v.rend());
    for(int i=0;i<k&&i<v.size();i++){
    	if(v[i]>=f)
    		total_cost=total_cost-v[i]+f;
    	else
    		break;
    }
    return total_cost;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<travelCards();
}