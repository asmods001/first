#include<cmath>
#include<cstring>
#include<iostream>
using namespace std;

int main(){
    int n;
    while(cin>>n && n!=0){
        int sum=0;
        int ans=1;
        for(int i=1;i<=n;){
            for(int j=1;j<=ans && i<=n;j++,i++){
                sum+=ans;
            }ans++;
        }cout<<n<<' '<<sum<<endl;
    }
    return 0;
}

