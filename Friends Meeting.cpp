#include<bits/stdc++.h>
 
using namespace std;
long long ans;
 
int main()
{
	int a,b;
	cin>>a>>b;
	long long sum = a+b;
	int half;
	if(sum%2 == 0) {
		half = sum/2;
		sum = abs(half-a);
		for(int i = 1; i<=sum; i++) {
			ans +=i;
		}
		ans+=ans;
	}
	else {
		int i;
		half = sum/2;
		a=min(a,b);
		sum = abs(half-a);
		for(i = 1; i<=sum; i++) {
			ans+=i;
		}
		ans+=ans;
		ans+=i;
	}
	printf("%lld\n",ans);
	return 0 ;
}
