#include<iostream>
#include<algorithm>
using namespace std;
int a[10000],i,b[10000],c,j,k,p,j1,mn,qq[100];
	int n,m;
	char s;
void remove(){
	n++;
   	sort(a,a+k);
   	if(p==1){
	   for(i=0;i<j1;i++)
		   	if(n==b[i]){
			   	qq[mn]=a[0];
			   	mn++;
			   	break;
			}
	   a[0]=999999;
   	}else{
	   for(i=k-1;i>=0;i--)
		   if(a[i]!=999999){
			   m=a[i];
			   a[i]=999999;
			   break;
		   	}
	   	for(i=0;i<j1;i++)
		   if(n==b[i]){
		   	qq[mn]=m;
		   	mn++;
		   	}
   }
}

int main(){
   while(cin>>n && n){
	   mn=0;
	   n=0;
	   cin>>j1;
	   j=0;
	   i=j1;
		   k=0;
		   p=1;
	   while(i--)
		   cin>>b[i];
	   while(cin>>s){
		   if(s=='e')
			   break;
		   switch(s){
		   case 'a':cin>>a[k],k++;break;
		   case 'r':remove();break;
		   case 'p':cin>>p;break;
		   }
	   }for(i=0;i<j1;i++)
		   cout<<qq[i]<<endl;
   }cout<<endl;
	return 0;
}
