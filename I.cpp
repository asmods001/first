#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<queue>
#define INF 0x3f3f3f3f
#define MAXN 20005
#define Mod 10001
using namespace std;
unsigned int a[50000],s[50000];
void reset(){
    int i;
    a[1]=1;
    s[1]=1;
    for(i=2;i<50000;i++){
        a[i]=a[i-1]+(int)log10((double)i)+1;
        s[i]=s[i-1]+a[i];
    }
}

int main(){
    int t,n;
    int i;
    cin>>t;
    reset();
    while(t--){
        cin>>n;
        i=1;
        while(s[i]<n)
            i++;
        int pos=n-s[i-1];
        int tmp=0;
        for(i=1;tmp<pos;i++){
            tmp+=(int)log10((double)i)+1;
        }cout<<((i-1)/(int)pow(10.0,tmp-pos)%10)<<endl;
    }
    return 0;
}
