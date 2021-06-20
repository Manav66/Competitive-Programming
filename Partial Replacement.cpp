#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	
	while(t-- > 0){
		int n,k;
		string s;
		cin >> n >> k;
		cin >> s;
		int count = 1;
		
		int i = s.find_first_of('*');
		while(true){
			int j = min(n-1, i+k);
			for(;i<j && s[j] == '.' ;j--){}
			if(i==j){
				break;
			}
			count ++;
			i=j;
		}
		cout << count << endl;		
	}
}
