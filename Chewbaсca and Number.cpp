#include<bits/stdc++.h>

using namespace std;

	string s;

int main(){

	cin >> s;
	
	int i=0;
	if(s[i] =='9')
		++i;
	
	while(i < s.length()){
		if(s[i] >='5'){
			s[i] = ('9' - s[i] + '0');
		}
		++i;
	}
	cout << s;
	return 0;
}
