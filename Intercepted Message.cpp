#include<bits/stdc++.h>

using namespace std;

int main(){
	int m,n,i,j;
	
	cin >> m >> n;
	int  a[m],b[n];
	
	for(i=0;i<m;i++){
		cin >> a[i];
	}
	
	for(j=0;j<n;j++){
		cin >> b[j];
	}
	i = 0;
	j = 0;
	int ans = 0;
	
	int sum1 = a[i];
	int sum2 = b[j];
	
	
	while(i<m && j<n){
		if(sum1<sum2){
			i++;
			sum1 +=a[i];
		}
		if(sum1> sum2){
			j++;
			sum2+=b[j];
		}
		if(sum1==sum2){
			ans++;
			i++;
			j++;
			sum1 = a[i];
			sum2 = b[j];
		}		
	}
	cout << ans << endl;
	return 0;
}
