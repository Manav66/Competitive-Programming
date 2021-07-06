#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,i,m=1;
	string s;
	
	cin >> n ;
	cin >> s;
	for(i=1;i<n;i++){
		if(s[i] == '0'){
			cout << m;
			m=0;
		}
		else {
			m++;
		}
	}
	cout << m << endl;
	return 0;	
}
