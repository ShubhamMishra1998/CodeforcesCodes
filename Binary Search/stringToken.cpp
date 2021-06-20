#include<bits/stdc++.h>
using namespace std;
int main(){
	char a[]="my name is shubham";
	char *token=strtok(a," ");
	cout<<token<<endl;
	while(token!=NULL){
		token=strtok(NULL," ");
		cout<<token<<endl;
	}

}