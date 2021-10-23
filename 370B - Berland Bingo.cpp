#include<bits/stdc++.h>

using namespace std;

#define pb push_back
typedef long long ll; 

void fastIO(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
}

void manav(){
	int n,x,y,k,a[101][101]={};
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> x;
		while(x--){
			cin >> y;
			a[i][y]=1;
		}
	}
	for(int i=0;i<n;i++){
		int check = 1;
		for(int j=0;j<n;j++){
			if(i==j)
				continue;
			
			int check2 = 1;
			for(int k=1;k<=100;k++){
				if(a[j][k] && !a[i][k]){
					check2 = 0;
					break;
				}
			}
			if(check2){
				check = 0;
				break;
			}
		}
		if(check)
			cout << "YES" << "\n";
			
		else 
			cout << "NO" << "\n";
	}	
}

	
int main(){
		
	fastIO();
	manav();
	return 0;
}
