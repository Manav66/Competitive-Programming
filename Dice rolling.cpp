#include <bits/stdc++.h>
 
using namespace std;
 
const int maxn = 105;
int dp[maxn];
 
int main()
{
	int t, n;
	for (int i = 2; i <= 7; i++) dp[i] = 1;
	for (int i = 8; i <= 100; i++) dp[i] = dp[i - 2] + dp[2];
	cin >> t;
	while (t--)
	{
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
