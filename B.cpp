#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
const int INF=100000000;
typedef pair<int ,int>P;
char maze[110][110];
int n,m;
int sx,sy;
int gx,gy;
int d[110][110];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int BFS(){
    queue<P> que;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            d[i][j]=INF;
        }
    }que.push(P(sx,sy));
    d[sx][sy]=0;
    while(que.size()){
        P p=que.front();
        que.pop();
        if(p.first==gx&&p.second==gy)
            break;
        for(int i=0;i<4;i++){
            int nx=p.first+dx[i];
            int ny=p.second+dy[i];
            if(nx>=0 && nx<n && ny>=0 && ny<m && maze[nx][ny]!='#' && d[nx][ny]==INF){
                que.push(P(nx,ny));
                d[nx][ny]=d[p.first][p.second]+1;
            }
        }
    }return d[gx][gy];
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>maze[i][j];
            if(maze[i][j]=='G'){
                gx=i;
                gy=j;
            }if(maze[i][j]=='S'){
                sx=i;
                sy=j;
            }
        }
    }cout<<BFS()<<endl;
}

