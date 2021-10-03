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
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int a=0,b=0,c=0,d=0,ans=INT_MAX;
		for(int i=0;i<s.size();i++)
			if(s[i]=='0')
				b++;
			else 
				a++;
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				d++;
				b--;
			}
			else {
				c++;
				a--;
			}
			ans = min(ans,min(a+d,b+c));
		}
		cout << ans << endl;
	}
}
int main(){
		
	fastIO();
	manav();
	return 0;
}
