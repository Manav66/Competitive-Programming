#include<iostream>
#include <cstdio>
#include <math.h>
#include <string>
 
using namespace std;
 
 
 
int main() {
	int n;
	scanf("%d", &n);
	int ans = 0;
	if (n >= 100) {
		int temp = n / 100;
		ans += temp;
		n -= (temp * 100);
	}
	if (n >= 20) {
		int temp = n / 20;
		ans += temp;
		n -= (temp * 20);
	}
	if (n >= 10) {
		int temp = n / 10;
		ans += temp;
		n -= (temp * 10);
	}
	if (n >= 5) {
		int temp = n / 5;
		ans += temp;
		n -= (temp * 5);
	}
	if (n >= 1) {
		int temp = n / 1;
		ans += temp;
		n -= (temp * 1);
	}
	printf("%d\n", ans);
	//system("pause");
	return 0;
	
}
