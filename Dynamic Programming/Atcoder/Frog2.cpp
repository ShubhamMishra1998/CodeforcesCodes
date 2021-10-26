#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,k;
    cin >> n;
    cin >> k;
    vector<int> v(n);
    vector<int> sol(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    
    sol[0] = 0;
    for (int i=1;i<=k && i<n;i++) {
        sol[i] = INT_MAX;
        for (int j=1;j<=i;j++) {
            sol[i] = min(sol[i], sol[i-j] + abs(v[i] - v[i-j]));
        }
    }
    
    
    for (int i=k+1;i<sol.size();i++) {
        sol[i] = INT_MAX;
        for (int j=1;j<=k;j++) {
            sol[i] = min(sol[i], sol[i-j] + abs(v[i] - v[i-j]));
        }
    }
    
    cout << sol[n-1] << endl;
    return 0;
}