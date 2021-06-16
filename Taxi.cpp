#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m,count[5] = {0};
	cin >> n;
	while(n--){
		cin >> m;
		count[m] += 1;
	}
	
	int sum = count[4] + count[3] + count[2] / 2;
    count[1] -= count[3];
    if (count[2] % 2 == 1)
    {
        sum += 1;
        count[1] -= 2;
    }
    if (count[1] > 0)
    {
        sum += (count[1] + 3) / 4;
    }
    cout << sum << endl;
}
