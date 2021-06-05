#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	int u = 0, r = 0, ans = 0;
	int len = s.size();
	for(int i = 0; i < s.size(); i++){
		if((s[i] == 'U' && s[i+1] == 'R') || (s[i] == 'R' && s[i+1] == 'U')){
			i ++; // R and U attached to see step
		}
		ans++;
	}
	cout << ans << endl;
	return 0;
}
 
