#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	
	cin >> t;
	while(t-->0){
		long long dest,v,lan,sef;
		cin >> dest >> v >> lan >> sef;
		long long ans=0;
		
		if(lan%v==0){
			lan--;
		}
		
		ans=dest/v-sef/v+lan/v;
		if(lan==sef&&sef==v){
			ans--;
		}
		cout << ans << endl;
	}
	return 0;
}
