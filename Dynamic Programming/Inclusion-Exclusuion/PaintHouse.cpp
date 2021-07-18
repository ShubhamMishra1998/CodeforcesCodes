#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int M[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++)
        cin>>M[i][j];
    }
    int red=M[0][0];
    int blue=M[0][1];
    int green=M[0][2];
    int newRed,newBlue,newGreen;
    for(int i=1;i<n;i++){
        for(int j=0;j<3;j++){
            if(j==0)
            newRed=M[i][j]+min(blue,green);
            else if(j==1)
            newBlue=M[i][j]+min(red,green);
            else
            newGreen=M[i][j]+min(red,blue);
        }
        red=newRed;
        blue=newBlue;
        green=newGreen;
    }
    int ans=min(red,min(blue,green));
    cout<<ans;
}