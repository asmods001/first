#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int n[26];

int main(){
	int max=0;
	memset(n,0,sizeof(0));
	char s[4][73];
	for(int i=0;i<4;i++){
		cin.getline(s[i],72);
	}for(int i=0;i<4;i++){
		for(int j=0;j<strlen(s[i]);j++){
			if(s[i][j]>='A' && s[i][j]<='Z'){
				int k=s[i][j]-'A';
				n[k]++;
				if(n[k]>max) max=n[k];
			}
		}
	}for(int i=max;i>0;i--){
		for(int j=0;j<26;j++){
			if(n[j]>=i) cout<<'*';
			else cout <<' ';
			cout<<' ';
		}cout<<endl;
	}
	
	for(int i=0;i<26;i++) cout<<(char)('A'+i)<<' ';
	return 0;
}
