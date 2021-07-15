#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isValid(vector<ll> &v1,ll n,double mid,ll len){
	double d=0;
	if((double)v1[0]-mid>0)
		return false;
	d=v1[0]+mid;
	for(int i=1;i<n;i++){
		double x=(double)v1[i]-mid*1.0;
		if(x>d)return false;
		d=max(d,(double)v1[i]+mid);
		if(d>=len)
			return true;
	}
	if(d>=len)
		return true;
	return false;

}
long double minDistance(vector<ll> &v1,ll n,ll len){
	long double l=0.0,h=len*1.0,mid;
	while(h-l>=1e-10){
         mid=(l+h)/2.0;
         //cout<<mid<<' ';
         if(isValid(v1,n,mid,len)){
         	//cout<<mid<<endl;
         	h=mid;
         }else{
         	l=mid;
         }
	}
	 return h;
}

int main(){
	ll n,l;
	cin>>n>>l;
	vector<ll> v1(n);
	for(int i=0;i<n;i++){
		cin>>v1[i];
	}
	sort(v1.begin(),v1.end());
	cout<<fixed<<setprecision(10)<<minDistance(v1,n,l);
}