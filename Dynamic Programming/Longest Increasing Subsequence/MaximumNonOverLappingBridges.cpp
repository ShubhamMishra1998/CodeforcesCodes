#include<bits/stdc++.h>
using namespace std;
class Building{
public:
	int north;
	int south;
};
bool compare(Building b1,Building b2){
	if(b1.north<b2.north)
		return true;
	if(b1.north==b2.north){
		if(b1.south<b2.south)
			return true;
		return false;
	}
	return false;
}
int NonOverLappingBuildings(Building *a,int n){
	sort(a,a+n,compare);
	int dp[n];
	for(int i=0;i<n;i++){
		dp[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(a[i].south>a[j].south and dp[i]<dp[j]+1)
				dp[i]=1+dp[j];
		}
	}
	int maxLen=1;
	for(int i=0;i<n;i++){
		maxLen=max(maxLen,dp[i]);
	}
	return maxLen;
}
int main(){
	int n,a1,a2;
	cin>>n;
	Building b[n];
	for(int i=0;i<n;i++){
		cin>>a1>>a2;
		b[i].north=a1;
		b[i].south=a2;
	}

	cout<<NonOverLappingBuildings(b,n);

}