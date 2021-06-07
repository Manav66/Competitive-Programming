#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, T[25][60]={0}, hour,min, cash =1;
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> hour >> min;
		T[hour][min] ++;
	}
	
	for(int i=0;i<=23;i++)
	{
		for(int j=0;j<=59;j++)
		{
			if(T[i][j] > cash)
			{
				cash = T[i][j];
			}
		}
	}
	
	cout << cash << endl;
}
