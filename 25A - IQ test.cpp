#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x,even(0),leven(0),lodd(0);
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x;
		
		if(x % 2 ==0){
			even +=1;
			leven = i;
		} else {
			even -=1;
			lodd = i;
		}
	}
	cout << (even > 0 ? lodd : leven) << endl;
}
