#include <bits/stdc++.h>

using namespace std;

#define endl "\n";

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void solve(){
	int t;
	cin >> t;
	
	while(t--){
		int n,k;
		
		cin >> n >> k;
		
		cout << ((n/k) * k) + min(n%k, k/2) << endl;
	}
}

int main(){
	fastIO();
	solve();
	return 0;
}
