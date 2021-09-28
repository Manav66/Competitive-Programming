#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
typedef long long ll; 

void solve(){
	int m,juicy,n,num,sum=0;
	cin >>n;
	vector<int> pre(n);
	
	for(int i=0;i<n;i++){
		cin >> num;
		sum+= num;
		pre[i]=sum;
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> juicy;
		cout << lower_bound(pre.begin(),pre.end(), juicy) - pre.begin()+1 << "\n";
	}
}

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
	return 0;
}
