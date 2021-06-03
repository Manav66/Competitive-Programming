#include<iostream>

using namespace std;

int main(){
	int n;
	string a;
	
	while(cin >> n){
		cin >> a;
		for(int i =0;i<n;i++){
			cin >> a;
		}
		
		 printf("%s\n",n&1?"contest":"home");
	}
	return 0;
}
