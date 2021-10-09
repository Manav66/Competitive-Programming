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
	int n,t,a[100005];
	cin >> n >> t;
	
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	ll sum=0;
	int i=0,ans=0,j=0;
	while(i<n){
		while(j<n && sum<=t){
			sum+= a[j];
			j++;
		}
		if(sum<=t){
			ans = max(ans,j-i);
		}
		else {
			ans = max(ans, j-i-1);
		}
		sum -= a[i];
		i++;
	}
	cout << ans << endl;
}
int main(){
		
	fastIO();
	manav();
	return 0;
}
