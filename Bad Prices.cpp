#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[1000000];
	int t;
	cin >> t;
	
	while(t--){
		int n,i;
		cin >> n;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		int count =0;
		int minimum= INT_MAX;
		for(i=n-1;i>=0;i--){
			if(a[i]>minimum){
				count ++;
			}
			minimum = min(a[i],minimum);
		}
		cout << count << endl;
	}	
	return 0;
}
