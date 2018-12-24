#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){  
    char str[10];  
    while(gets(str)) {
		int len=strlen(str);
		sort(str,str+len);
		do{
			cout<<str<<endl;
		}while(next_permutation(str,str+len));
	}
    return 0;  
}  
