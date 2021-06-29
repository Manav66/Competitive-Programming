#include<bits/stdc++.h>
#include<cmath>

using namespace std;

int main(){
	long long l1,r1,l2,r2,k;
	long long smallest,highest,count=1;
	
	cin >> l1 >> r1 >> l2 >> r2 >> k;
	
	highest = max(l1,l2);
	smallest = min(r1,r2);
	
	if(highest > smallest) {
		cout << "0" << endl;
		return 0;
	}
	
	if(k>=highest && k <=smallest)
		count --;
	
	count+=abs(highest-smallest);
	cout << count << endl;
	
	return 0;
	
}
