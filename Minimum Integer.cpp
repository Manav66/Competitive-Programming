#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	cin >> q;
	long long l,r,d,x=0,let;
	
	while(q--){
		cin >> l >> r >> d;
		
		if(l > d)
			cout << d << endl;		
		
		else {
			let = r%d;
			x = r - let + d;
			cout << x << endl;
		}
		
	}
	
	return 0;
}
