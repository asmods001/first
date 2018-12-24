#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;

int a[1025];
void next(int N){
    int i,j,index=0;
    bool flag = false;
    for(i=N-2;i>=0;--i){
	    if(a[i]<a[i+1]){
            flag = true;
            index = i;
            break;
        }
    }if(flag == false ){
        sort(a, a+N);
        return;
    }int temp = index+1;
    for(i=N-1; i>=index+2; --i ){
        if( a[i]<a[temp] && a[i]>a[index]){
            temp = i;
            break;
        }
    }int change = a[index];
    a[index] = a[temp];
    a[temp] = change;
    sort(a+index+1,a+N);
}

int main(){
    int T;
    int N,K;
    int i;
    cin>>T;
    while(T--){
        cin>>N>>K;
        for(i=0; i<N; ++i )
            cin>>a[i];
        while(K--)
            next(N);
        for(i=0; i<N; ++i ){
            if(i!=0)
                cout<<' ';
            cout<<a[i];
        }cout<<endl;
    }
    return 0;
}

