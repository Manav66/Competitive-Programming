#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b,m=0;
		cin >> a >> b;
		
		if(a ==b){
			cout << "0" << endl;
			continue;
		}
		
		if(a > b){
			while(a > b){
				if(a % 8 == 0 && a/8 >=b){
					a /=8;
					m++;
				} 
				
				else if(a % 4==0 && a/4>=b){
					a /=4;
					m++;
				}
				
				else if(a % 2 ==0 && a/2 >=b){
					a /=2;
					m++;
				}
				
				else{
					break;
				}
			}
		}
		
		else {
			while(a < b){
				if(a * 8 <=b){
					a *=8;
					m++;
				}
				
				else if(a *4 <=b){
					a *=4;
					m++;
				}
				
				else if(a * 2<=b){
					a *=2;
					m++;
				}
				else {
					break;
				}
			}
		}
		 
		 if(a == b){
		 	cout << m << endl;
		 }
		 
		 else {
		 	cout << -1 << endl;
		 }
	}
}
