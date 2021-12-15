#include<bits/stdc++.h>
using namespace std;
Node *Revere(Node *head){
	Node *current=haed,*next=NULL,*prev=NULL;
	while(current!=NULL){
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	head=prev;
	return head;
}
int main(){

}