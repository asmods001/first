#include<cstdio>
#include<cstring>
#include<queue>
#include<iostream>
using namespace std;
const int maxn=50;

struct node{
	int date;
	node* ld;
	node* rd;
};
int pre[maxn],in[maxn],post[maxn];
int n; 

node* create(int postl,int postr,int inl,int inr){
	if(postl>postr)      
	return NULL;
	node* root=new node;                    
	root->date=post[postr];           
	int k;
	for(k=inl;k<=inr;k++){
		if(in[k]==post[postr])
		break;
	}int numleft=k-inl;             
	root->ld=create(postl,postl+numleft-1,inl,k-1);
	root->rd=create(postl+numleft,postr-1,k+1,inr);
	return root;
}

int num=0;                         
void bfs(node* root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node* now=q.front();
		q.pop();
		cout<<now->date;
		num++;
		if(num<n) cout<<' ';	
		if(now->ld !=NULL) q.push(now->ld );
		if(now->rd !=NULL) q.push(now->rd );
	 } 
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++)  
	cin>>post[i];
	for(int i=0;i<n;i++) 
	cin>>in[i];
	node* root=create(0,n-1,0,n-1);   
	bfs(root);           
	return 0;
}
  
