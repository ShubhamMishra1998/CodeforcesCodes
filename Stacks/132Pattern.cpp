#include<bits/stdc++.h>
using namespace std;
bool isValid(vector<int> &nums,int n){
        if(n==0)return false;
        stack<int> st;
        vector<int> Min(n);
        Min[0]=nums[0];
        int m=nums[0];
        for(int i=1;i<n;i++){
            m=min(m,nums[i]);
            Min[i]=m;
        }
        for(int i=n-1;i>=0;i--){
            if(st.empty())
            st.push(nums[i]);
            else{
                while(!st.empty() and st.top()<=Min[i])
                st.pop();
                if(!st.empty() and nums[i]>Min[i] and st.top()<nums[i])
                return true;
                st.push(nums[i]);

            }
        }
        return false;
}
int main(){
	int n;
	cin>>n;
	vector<int> v1(n);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	if(isValid(v1,n))
		cout<<"true";
	else
		cout<<"false"<<'\n';
}