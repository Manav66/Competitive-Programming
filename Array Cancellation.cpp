#include<bits/stdc++.h>
#include<math.h>
#include<vector>

using namespace std;
typedef long long ll;

void solve(){
	int n;
	cin >>n;
	vector<ll>a(n);
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	
	ll total =0;
	for(int i=0;i<n;i++){
		if(a[i] > 0){
			total += a[i];
		}
		
		else if(a[i] < 0){
			ll key = min(total, -a[i]);
			a[i] +=key;
			total -= key;
		}
	}
	total = 0;
	for(int i=0;i<n;i++){
		if(a[i] <0){
			total += abs(a[i]);
		}
	}
	cout << total << "\n" ;
}

int main(){
	int t=1;
	cin >> t;
	for(int i=1;i<=t;i++){
		solve();
	}	
	return 0;
}
