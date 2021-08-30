#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t,k,i;
	cin >> t;
	while(t--){
		cin >> k;
		int count=0;
		
		for(i=1; ;i++){
			if(i%3==0 || i%10==3) 
				continue;
			else 
				count++;
			if(count==k){
				cout << i << endl;
				break;
			}
		}
	}
}
