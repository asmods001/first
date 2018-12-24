#include <iostream>
using namespace std;

int main(){
    int n,d,i,j,flag;
    while(cin>>n>>d && n!=0 && d!=0){
        int a[d][n];
        for(i=0; i<d; ++i)
            for(j=0; j<n; ++j)
                cin>>a[i][j];
        for(i=0; i<n; ++i){
            flag=0;
            for(j=0; j<d; ++j)
                if(a[j][i]==1)
                    flag++;
            if (flag == d)
                break;
        }if(flag==d)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

