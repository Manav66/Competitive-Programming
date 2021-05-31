#include<iostream>
using namespace std;
const int MAXN = 1e5 + 5;
int main()
{
	int n;
	while(~scanf("%d",&n))
	{
		int l = 0, r = 0;
		for(int i = 0; i < n; i++)
		{
			int x,y;scanf("%d%d", &x, &y);
			if(x > 0) l++;
			else if(x < 0) r++;
		}
		if(min(l, r) > 1) printf("No\n");
		else printf("Yes\n");
	}
	return 0;
}
