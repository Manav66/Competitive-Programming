#include<bits/stdc++.h>

using namespace std;

int main(){
	int i,m,sum=0;
	for(i=1;i<=5;i++){
		cin >> m;
		sum +=m;
	}
	
	if(sum%5==0&&sum!=0){
		cout << sum/5 << endl;
	}
	else {
		cout << "-1" << endl;
	}
}
