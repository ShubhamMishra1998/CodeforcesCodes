#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<cmath>
 
using namespace std;
long long n,ans[10000],top=0;
long long Pow(int k)
{
    long long tmp=2,out=1;
    while (k)
    {
        if (k&1) out*=tmp;
        tmp*=tmp;
        k>>=1;
    }
    return out;
}
int main()
{
    int i,j;
    scanf("%I64d",&n);
    //long long tmp=Pow(60);
    //while (1);
    for (i=0;i<=60;++i)
    {
        long long q=Pow(i+1)-3;
        if (q>n*2) break;
        long long x=(long long)(-q+(long long)sqrt((double)q*q+8*n))/2;
        if (x*x+q*x==2*n && x>0 && x&1) ans[++top]=x*Pow(i);
        x=(long long)(-q-(long long)sqrt((double)q*q+8*n))/2;
        if (x*x+q*x==2*n && x>0 && x&1) ans[++top]=x*Pow(i);
    }
    if (!top) puts("-1");
    else
    {
        sort(ans+1,ans+1+top);
        for (i=1;i<=top;++i)
            printf("%I64d\n",ans[i]);
    }
    return 0;
}