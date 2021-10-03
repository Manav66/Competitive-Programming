#include <iostream>
#include<bits/stdc++.h>

using namespace std;

#define endl "\n"

#define pb push_back
typedef long long ll; 
typedef vector<int>vi;

void fastIO(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void manav(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		
		vi arr(n);
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		int check = -1;
		for(int i=0;i<n;i++){
			if(arr[i] < i){
				break;
			}
			check = i;
		}
		int check2 = n-1;
		for(int i=n-1;i>=0;i--){
			if(arr[i] < (n-1) - i){
				break;
			}
			check2 = i;
		}
		if(check2 <= check){
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}   
}

int main(){
		
	fastIO();
	manav();
	return 0;
}
