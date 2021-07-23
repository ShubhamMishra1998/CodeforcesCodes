#include<bits/stdc++.h>
using namespace std;
int countSetBits(int n){
	int count=0;
	while(n>0){
		if((n & 1))
			count++;
		n=n>>1;
	}
	return count;
}
int KernighansAlgorithm(int n){
	int count=0;
	while(n>0){
		int rsbm=n & -n;
		n=n-rsbm;
		count++;
    }
    return count;
}
int main(){
	int n;
	cin>>n;
	cout<<countSetBits(n)<<endl;
	cout<<KernighansAlgorithm(n);

}