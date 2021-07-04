#include<bits/stdc++.h>
using namespace std;
void f1(char *a,int i, char maxEle,int n){
     if(i==n){
     	a[i]='\0';
     	cout<<a<<endl;
     	return;
     }
     for(char ch='a';ch<=maxEle;ch++){
     	a[i]=ch;
     	if(ch==maxEle){
     		f1(a,i+1,maxEle+1,n);
     	}else{
     		f1(a,i+1,maxEle,n);
     	}
     }
}
int main(){
	int n;
	cin>>n;
	char a[10000];
	f1(a,0,'a',n);

}