#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

char map[101][101];
int num,n,m;
bool BFS(int x,int y){
    map[x][y]='.';
    for(int i=-1;i<=1;i++)
        for(int j=-1;j<=1;j++)
          if(map[x+i][y+j]=='W')
             BFS(x+i,y+j);
    return 0;
}

int main(){
    while(cin>>n>>m){
        num=0;
        memset(map,0,sizeof(map));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
             cin>>map[i][j];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            if(map[i][j]=='W'){
                 BFS(i,j);
                 num++;
             }
        cout<<num<<endl;
    }
    return 0;
}
