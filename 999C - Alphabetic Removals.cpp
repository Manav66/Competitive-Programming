#include<bits/stdc++.h>

using namespace std;

char str[400005];
int n,k;
	
int main(){

	cin >> n >> k;
	cin >> str;
	
	for(int i=0;i<=25;i++){
		for(int j=0;j<n&&k;j++){
			if(str[j]== 'a' + i){
				str[j] = '0';
				k--;
			}
		}
	}
	for(int i =0;i<n;i++){
		if(str[i] != '0')cout << str[i];
	}
	return 0;
}
