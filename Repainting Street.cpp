#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t-- > 0){
		int i,n,k;
		cin>>n>>k;
		int a[n];
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		int m=INT_MAX;
		for(i=1;i<=100;i++){
			int j=0,c=0;
			while(j<n){
				if(a[j]!=i){
					j=j+k;
					c++;
				}
				else{
					j++;
				}
			}
			m=min(m,c);
		}
		cout<<m<<endl;
	}
}
