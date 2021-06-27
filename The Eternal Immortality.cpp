#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a,b,i,prod;
	
	cin >> a >> b;
	
	if(b-a>9)
		cout<<"0"<<endl;
	
	else {
		prod=1;
		for(i=a+1;i<=b;i++){
			prod = (prod*(i%10))%10;
		}
		cout << prod % 10;
	}
}
