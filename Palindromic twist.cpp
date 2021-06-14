#include<bits/stdc++.h>
#include<cmath>
#include<cstdlib>
#define max_size 105

using namespace std;

int main(){
	char word[max_size];
	
	int t,n;
	cin >> t;
	while(t--){
		int check=0;
		cin >>n;	
		cin >> word;
		
		for(int i=0;i<n/2;i++){
			if(abs(word[i]-word[n-i-1])==2|| abs(word[i]-word[n-i-1])==0){
				continue;				
			}
			else{
				check = 1;
				break;
			}
		}
		if(check) 
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	return 0;
}
