#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef double ld;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
const ld del=(ld)1e-5,PI=acos(-1.000);
ld b,c;
ld solve(ld x)
{
	ld ans=(x*x+b*x+c);
	ans/=sin(x);
	return ans;
}

int  main()
{
    fast;
    ll t=1;
    scanf("%d",&t);
    while(t--)
	{
		scanf("%lf %lf",&b,&c);
		ld l=del,r=(PI/2.00)-del;
		ld ans=(ld)1e9;
		int run=35;
		while(run--)
		{
			ld x=(r-l)/3.00;
			ld m1=(l+x);
			ld m2=(r-x);
			ld a1=solve(m1);
			ld a2=solve(m2);
			if(a1<=a2)
			{
				ans=min(ans,a1);
				r=m2-del;
			}
			else
			{
				ans=min(ans,a2);
				l=m1+del;
			}
		}
		printf("%0.8lf\n",ans);
	}
    return 0;
}