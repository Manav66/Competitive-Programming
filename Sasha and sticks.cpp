#include <iostream>
#include <cstdio>
#include <math.h>
#include <string>
#include <algorithm>
 
using namespace std;
 
long long n, k;
long long ans;
 
 
int main() {
	scanf("%lld %lld", &n, &k);
	 ans = n / k;
	if (ans % 2 == 0) {
		printf("NO\n");
	}
	else {
		printf("YES\n");
	}
	return 0;
}
