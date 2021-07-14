#include<bits/stdc++.h>

using namespace std;

int main(){
	long long i,n,k=0;
	cin >> n;
	
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			k=i;
			break;
		}
	}
	if(k==0) 
		cout << "1" << endl;
	else 
		cout << (n-k)/2	+ 1 << endl;	
}
