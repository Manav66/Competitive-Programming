#include<bits/stdc++.h>

using namespace std;

int main(){
	string strs[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	
	int n=0;
	cin >> n;
	
	int i = 1;
	while(n>i*5){
		n -= i*5;
		i<<=1;
	}
	int c= n/i;
	if(n%i) c++;
	cout << strs[c-1];
}
