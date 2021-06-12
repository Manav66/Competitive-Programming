#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	int m,i,j;
	
	m = (n*n)/2;
	
	for(i=1,j=(n*n);i<=m && j>m; i++,j--){
		cout << i << "  " <<  j << endl;
	}
}
