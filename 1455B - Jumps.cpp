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
		int x;
		cin >> x;
		int ans=0,k=0;	
		for(int i=1;k<x;i++){
			k+=i;
			ans++;
		}	
		if(k-x==1)
			ans++;
		
		cout << ans << endl;
	}
}
int main(){
		
	fastIO();
	manav();
	return 0;
}
