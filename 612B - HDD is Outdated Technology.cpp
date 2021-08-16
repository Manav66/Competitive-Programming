#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int>   II;
typedef vector< II >      VII;


#define F first
#define S second
II a[200005];

int main(){
	int n;
		
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i].F;
		a[i].S = i;
	}
	sort(a,a+n);
	long long sum=0;
	
	for(int i=0;i<n-1;i++)
		sum += abs(a[i].S-a[i+1].S);
	cout << sum << endl;
}
