#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t,i;
	cin >> t;
	
	while(t--){
		long long n,k,ans=0,value=9e18;
		cin >> n >> k;
		
		if(k==1)
			cout << n << endl;
		
		else if(n<=k){
			cout << "1" << endl;
		}
		else  {
            ans=value;
            for(i=2; i*i<=n ; i++)
            {
                if(n%i==0)
                {
                    if(i<=k)ans=min(ans  , n/i);
                    if( (n/i)<=k)ans=min(ans  , i);
                }
            }
            if(ans==value)ans=n;
			cout << ans << endl;
		}
	}
}
