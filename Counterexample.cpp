#include<bits/stdc++.h>

using namespace std;

int main(){
	long long l,r,a,b,c;
	cin >> l >> r;
	
	if(l==r || r==l+1){
		cout << "-1" << endl;
	}
	
	else if(l%2==0){
		cout << l << " " << l+1 << " " << l+2 << endl;
	}
	
	else if(r-l+1>3){
		cout << l+1 << " " << l+2 << " " << l+3 << endl;
	}
	
	else {
		cout << "-1" << endl;
	}
}
