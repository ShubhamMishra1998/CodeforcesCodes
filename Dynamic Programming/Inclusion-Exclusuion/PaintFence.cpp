#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int lastTwoSameColor=k;
    int lastTwoDiffColor=k*(k-1);
    int total=lastTwoSameColor+lastTwoDiffColor;
    for(int i=3;i<=n;i++){
        int newlastTwoSameColor=lastTwoDiffColor;
        int newlastTwoDiffColor=total*(k-1);
        int newTotal=newlastTwoSameColor+newlastTwoDiffColor;
        lastTwoSameColor=newlastTwoSameColor;
        lastTwoDiffColor=newlastTwoDiffColor;
        total=newTotal;
    }
    cout<<total;
}