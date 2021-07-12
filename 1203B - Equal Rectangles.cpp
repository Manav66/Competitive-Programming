#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int t;
vector<int> a;
int main()
{
	int t,n,x;
	scanf("%d",&t);
	while(t--)
	{
		a.clear();
		scanf("%d",&n);
		for(int i=1;i<=4*n;i++)
		{
			scanf("%d",&x);
			a.push_back(x);
		}
		sort(a.begin(),a.end());
		int s=a[0]*a[4*n-1];
		bool f=false;
		for(int i=0;i<n;i++)
		{
			int l=2*i,r=4*n-2*i-1;
			if(a[l]!=a[l+1]||a[r]!=a[r-1]||a[l]*a[r]!=s)
			{
				f=true;
				break;
			}
		}
		if(f) puts("NO");
		else puts("YES");
	}
}
