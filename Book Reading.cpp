#include<bits/stdc++.h>

using namespace std;

int main(){
	int q;
	
	cin >> q;
	
	while(q--){
		long long i,n,m,sum=0;
		
		cin >> n >> m;
		
		for(i=1;i<=10;i++)
			sum+= (m * i % 10);
		long long cnt = n / m / 10;
        long long r = n / m % 10;
        long long num = sum * cnt;
        
        for(i=1;i<=r;i++)
        	num+= (m * i % 10);
        cout << num << endl;
	}
}
