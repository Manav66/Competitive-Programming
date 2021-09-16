#include <bits/stdc++.h>
 
using namespace std;
 
#define endl "\n";
 
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
int solve(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int s=(n-a[0])%n;
	for(int i=1;i<n;i++)
	{
		int t=(i%2==0)?1:-1;
		int g= (a[i]+t*s)%n;
		g=(g+n)%n;
		if(g!=i)
		{
			cout<<"No" << endl;
			return 0;
		}
	}
	cout<<"Yes" << endl;
}
 
int main(){
	fastIO();
	solve();
	return 0;
}
