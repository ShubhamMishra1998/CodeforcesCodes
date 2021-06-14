#include<bits/stdc++.h>
using namespace std;
int count1[2][2]={0};
void countGood(string &s1){
	int even=0,odd=0;
    for(int i=0;i<s1.length();i++)
    	odd++;
    for(int i=0;i<s1.length();i++){
    	if(i%2){
    		odd+=count1[s1[i]-'a'][0];
    		count1[s1[i]-'a'][0]++;
    		even+=count1[s1[i]-'a'][1];
    	}else{
    		odd+=count1[s1[i]-'a'][1];
    		count1[s1[i]-'a'][1]++;
    		even+=count1[s1[i]-'a'][0];

    	}
    }
    cout<<even<<' '<<odd;
}
int main(){
	string s1;
	cin>>s1;
	countGood(s1);
}