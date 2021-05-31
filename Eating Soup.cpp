#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	
	while(cin >> n >> m){
	
	if(m == n){
		cout << "0";
	} else if(m < 2){
		cout << "1";
	} else if(n >= m * 2){
		cout << m << endl;
	} else {
		cout << n-m << endl;
	}
 }
}
