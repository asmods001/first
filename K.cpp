#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    int n,m;
    while(cin>>n>>m){
        int maxn=n>m?n:m;
        int minx=n>m?m:n;
        int maxx=0;
        for(int i=minx;i<=maxn;i++){
            int x=i,sum=1;
            while(x!=1){
                if(x%2==0) x/=2;
                else x=3*x+1;
                sum++;
            }
            if(sum>maxx) maxx=sum;
        }
    cout<<n<<' '<<m<<' '<<maxx<<endl;
    }
    return 0;
}

