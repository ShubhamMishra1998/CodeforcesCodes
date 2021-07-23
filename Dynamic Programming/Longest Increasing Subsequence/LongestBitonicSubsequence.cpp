#include<bits/stdc++.h>
using namespace std;
int BitonicSubsequence(vector<int> &nums){
	int n=nums.size();
	int LIS[n],LDS[n];
	for(int i=0;i<n;i++){
		LIS[i]=1;
		LDS[i]=1;
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if(nums[i]>nums[j] and LIS[i]<LIS[j]+1)
				LIS[i]=1+LIS[j];
		}
	}
	for(int i=n-2;i>=0;i--){
		for(int j=n-1;j>i;j--){
           if(nums[i]>nums[j] and LDS[i]<1+LDS[j])
           	LDS[i]=1+LDS[j];
		}
	}
	int maxLen=0;
	for(int i=0;i<n;i++){
		maxLen=max(maxLen,LIS[i]+LDS[i]-1);
	}
	return maxLen;
}
int main(){
	int n;
	cin>>n;
	vector<int> v1(n);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	cout<<BitonicSubsequence(v1);
}