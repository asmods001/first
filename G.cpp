#include<iostream>
#include<cstring>
using namespace std;

int minNum(int a,int b){
	if(a<b) return a;
	else return b;
}

int UglyNum(int n){
	if(n<=1) return 1;
	int a[1503];
	memset(a,0,sizeof(a));
	a[1]=1;
	int i=1,j=1,k=1;
	for(int m=2;m<1503;m++){
		a[m]=minNum(minNum(a[i]*2,a[j]*3),a[k]*5);
		if(a[i]*2==a[m]) ++i;
		if(a[j]*3==a[m]) ++j;
		if(a[k]*5==a[m]) ++k;
	}return a[n];
}


int main(){
	int n;
	while(cin>>n && n<=1500 && n>0)
		cout<<UglyNum(n)<<endl;
	return 0;
}
