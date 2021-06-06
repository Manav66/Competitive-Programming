#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
	int n,a,b,num;
	cin >> n >> a >> b;
	
	num = min(n-a,b+1);
	cout << num << endl;		
	
}
