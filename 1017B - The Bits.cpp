#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	char a[100005],b[100005];
	
	cin >> n;
	cin >> a >> b;
	long long countzero=0,countone=0,n1=0,n0=0;
	for(int i=0;i<n;i++){
		if(b[i]=='0'){
			if(a[i]=='1'){
				countone++;
			}
			else {
				countzero++;
			}
		}
			else {
				if(a[i]=='1'){
					n1++;
				} else {
					n0++;
				}
			}
		}
		cout << countzero * n1 + countone * n0 + countzero * countone << endl;
}
