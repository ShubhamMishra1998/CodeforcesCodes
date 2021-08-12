#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={5,10,15,20,20,20,22};
    cout<<lower_bound(v1.begin(),v1.end(),21)-v1.begin();
}

