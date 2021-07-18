#include<bits/stdc++.h>
using namespace std;
int countWays(int n){
	if(n==1)return 2*2;
	int prev0=1,prev1=1,current1=0,current0=0;
	for(int i=2;i<=n;i++){
		current0=prev1;
		current1=prev1+prev0;
		prev1=current1;
		prev0=current0;
	}
	return (current1+current0)*(current1+current0);
}
int main(){
	int n;
	cin>>n;
	cout<<countWays(n)<<endl;
}
//this is same as fib(n+2)*fib(n+2);