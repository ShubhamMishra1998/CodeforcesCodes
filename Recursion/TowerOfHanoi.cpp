#include<bits/stdc++.h>
using namespace std;
void printTower(int n,int t1,int t2,int t3){
	if(n==0)return;
	printTower(n-1,t1,t3,t2);
	cout<<"Move "<<n<<"th disc from T"<<t1<<" to T"<<t2<<endl;
	printTower(n-1,t3,t2,t1);
}
int main(){
	int n;
	cin>>n;
	printTower(n,1,2,3);
	cout<<pow(2,n)-1;
}