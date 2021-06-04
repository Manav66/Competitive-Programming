#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,k;
	int square[50];
	cin >> n >> k;
	for(int i=0;i<n;++i){
		cin >> square[i];
	}
	
	sort(square,square+n);
	
	if(n-k>=0){
		cout << square[n-k]  << " 0" << endl;
	}
	
	else {
		cout << -1 << endl;
 	}
}
