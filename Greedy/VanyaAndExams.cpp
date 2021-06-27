#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	ll n,r,avg;
	cin>>n>>r>>avg;
	ll totalScoreRequired=avg*n;
	vector<pair<ll,ll>> v1;
	ll ai,bi,score=0;
	for(int i=0;i<n;i++){
      cin>>ai>>bi;
      v1.push_back({bi,ai});
      score+=ai;
	}
	if(score>=totalScoreRequired){
		cout<<"0";
	}
	else{
		ll esays=0;
		ll scoreRequired=totalScoreRequired-score;
		sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
        	ll es=v1[i].first;
        	ll sc=v1[i].second;
        	ll scoreTaken=(r-sc);
        	if(scoreTaken>=scoreRequired){
        		esays+=(es*scoreRequired);
        		break;
        	}else{
        		esays+=(scoreTaken*es);
        		scoreRequired-=scoreTaken;
        	}
        }
        cout<<esays;
	}

}