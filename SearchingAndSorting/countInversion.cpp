#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ans=0;
void merge(ll *a,ll *Left,ll *Right,ll n,ll m)
{
    ll i=0,j=0,k=0;
    while(i<n&&j<m)
    {
        if(Left[i]>Right[j])
        {
            ans+=(n-i);
            a[k]=Right[j];
            j++;
            k++;
        }
        else
        {
            a[k]=Left[i];
            i++;
            k++;
        }
    }
    while(i<n)
    {
        a[k]=Left[i];
        i++;
        k++;
    }
    while(j<m)
    {
        a[k]=Right[j];
        j++;
        k++;
    }
}
void countInversions(ll *a,ll n)
{
    if(n<2)
    return;
    ll mid=n/2;
    ll Left[mid],Right[n-mid];
    for(int i=0;i<mid;i++)
    Left[i]=a[i];
    for(int i=mid;i<n;i++)
    Right[i-mid]=a[i];
    countInversions(Left,mid);
    countInversions(Right,n-mid);
    merge(a,Left,Right,mid,n-mid);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
       ans=0;
       ll n;
       cin>>n;
       ll a[n];
       for(int i=0;i<n;i++)
       cin>>a[i];
       countInversions(a,n);
       cout<<ans<<endl;
}