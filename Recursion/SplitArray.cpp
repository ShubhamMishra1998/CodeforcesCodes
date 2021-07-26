#include<bits/stdc++.h>
using namespace std;
void print(vector<int> v1,vector<int> v2){
     unordered_map<int,int> m1;
     for(int i=0;i<v2.size();i++){
     	m1[v2[i]]++;
     }
     vector<int> v3;
     for(int i=0;i<v1.size();i++){
     	if(m1[i]==0)
     		v3.push_back(i);
     }
     for(int i=0;i<v2.size();i++){
     	cout<<v1[v2[i]]<<' ';
     }
     cout<<"and ";
     for(int i=0;i<v3.size();i++){
     	cout<<v1[v3[i]]<<' ';
     }
     cout<<endl;

}
void printSums(vector<int> v1,int sum,int idx,vector<int> v2,int &ct){
      if(sum==0){
      	print(v1,v2);
      	ct++;
      	return;
      }
      for(int i=idx;i<v1.size();i++){
      	v2.push_back(i);
      	sum-=v1[i];
      	printSums(v1,sum,i+1,v2,ct);
      	v2.pop_back();
      	sum+=v1[i];
      }
}
int main(){
	int n;
	cin>>n;
	vector<int> v1(n);
	int sum=0;
	for(int i=0;i<n;i++){
         cin>>v1[i];
         sum+=v1[i];
	}
	if(sum%2==0){
		sort(v1.begin(),v1.end());
       sum=sum/2;
       vector<int> v2;
       int cnt=0;
       printSums(v1,sum,0,v2,cnt);
       cout<<cnt;
	}else{
		cout<<"0";
	}
}