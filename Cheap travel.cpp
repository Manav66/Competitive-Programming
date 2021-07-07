#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b;
	cin >> n >> m >> a >> b;
	
	if(m*a > b){
		int left = (n % m) * a;
		if(left > b){
			cout << n/m * b + b;
		}
		else {
			cout << n/m * b + left;
		}	
	}
	else {
		cout << n * a;
	}	
}
