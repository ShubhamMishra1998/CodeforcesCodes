#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
   void printNextGreater(vector<ll>& nums) {
        int n=nums.size();
        vector<ll> ans;
        stack<ll> st;
        for(int i=n-1;i>=0;i--){
            if(st.empty())
                st.push(nums[i]);
            else{
                while(!st.empty() and st.top()<=nums[i])
                    st.pop();
                st.push(nums[i]);
            }
        }
        for(int i=n-1;i>=0;i--){
            if(st.empty()){
                ans.push_back(-1);
                st.push(nums[i]);
            }else{
            while(!st.empty() and st.top()<=nums[i])
                st.pop();
            if(st.empty())
                ans.push_back(-1);
                else ans.push_back(st.top());
                st.push(nums[i]);
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
        	cout<<ans[i]<<endl;
        }

    }
int main(){
	ll n;
	cin>>n;
	cout<<n<<'\n';
	vector<ll> v1(n);
	for(int i=0;i<n;i++)
		cin>>v1[i];
	printNextGreater(v1);
}