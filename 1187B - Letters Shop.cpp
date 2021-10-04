#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

#define pb push_back
typedef long long ll; 

void fastIO(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void manav(){
	long n,m;
	vector<vector<int>> count(26);
	string s;
	cin >> n >> s >> m;
	for(int i=0;i<s.size();i++)
		count[s[i] - 'a'].pb(i+1);
		
	while(m--){
		string t;
		cin >> t;
		vector<int> cnt(26);
		int ans = 1;
		
		for(int i=0;i<t.size();i++)
			cnt[t[i] - 'a']++;
		
		for(int i=0;i<t.size();i++){
			int k = t[i] - 'a';
			ans = max(ans, count[k][cnt[k]-1]);
		}
		cout << ans << "\n";
	}
}
int main(){
		
	fastIO();
	manav();
	return 0;
}
