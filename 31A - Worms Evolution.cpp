#include<bits/stdc++.h>

using namespace std;

int main() {
	int n,a[105],i,j,k;
	cin >> n;
	bool flag = false;
	
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i!=j){
				for(k=0;k<n;k++){
					if(k!=j && a[i] == a[j]+a[k]){
						if(a[j] > a[k]){
							cout << i+1 << " " << k+1 << " " << j+1 << endl;
 						} else {
 							cout << i+1 << " " << j+1 << " " << k+1 << endl;
						 }
						flag = true;
						break;
					}
				}
				if(flag == true)
					break;
			}
		}
		if(flag == true)
			break;
	}
	if(flag == false)
		cout << "-1" << endl;	
}
