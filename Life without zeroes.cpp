#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

long long remove(long long a){
	string sum= to_string(a);
	string sum2;
	int n = sum.length();
	for(int i=0;i<n;i++){
		if(sum[i]!='0'){
			sum2 += sum[i];
		}
	}
	return stoll(sum2);
}

int main(){
	long long a,b;
	cin >> a >> b;
	
	long long resultbef = a + b;
	long long resultaft;
	
	long long newa = remove(a);
	long long newb = remove(b);
	
	resultaft = remove(resultbef);
	
	if((newa + newb) == resultaft){
		cout << "YES" << endl;
	}
	 
	 else {
	 	cout << "NO" <<  endl;
	 }
}
