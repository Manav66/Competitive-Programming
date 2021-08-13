#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k,a[100005],i;
	long long sum=0;
	cin >> n >> k;
	
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n,k>0;i++){
		if(a[i]<0){
			a[i] *= -1;
			k--;
		}
		else 
			break;
	}
	sort(a,a+n);
	
	if(k>0){
		if(k%2)
			a[0]*= -1;
	}
	for(i=0;i<n;i++)
		sum += a[i];
	
	cout << sum << endl;
}
