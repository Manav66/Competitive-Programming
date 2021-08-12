#include<iostream>
using namespace std;

int main(){
	int n,k,a,lastnum=0,cont=1;
	
	cin >> n >> k;
	for(int i=0;i<n;i++){
		cin >> a;
		
		if(a==lastnum){
			cont += 1;
		}
		else {
			cont = 1;
		}
		lastnum = a;
	}
	printf("%d\n", cont + k > n ? n - cont : -1);
	return 0;
}
