#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t--){
		long long str,inte,exp,diff;
		
		cin >> str >> inte >> exp;
		
		diff = inte-str;
		
		if(diff>=exp) 
			cout << "0" << endl;
		
		else if(diff>=0){
			exp = exp - diff -1;
			str = str + diff +1;
			
			cout << min((str + exp - inte + (str+exp-inte)%2)/2, exp + 1) << endl;
		}
		else {
			cout << min((str+exp-inte + (str+exp-inte)%2)/2, exp + 1) << endl;
		}
	}
}
