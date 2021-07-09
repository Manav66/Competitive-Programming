#include<bits/stdc++.h>
#include <numeric>
#include <algorithm>

using namespace std;

int main(){
	int d,sumt,mint[30],maxt[30],summin=0,summax=0;
	
	cin >> d >> sumt;
	for(int i=1;i<=d;i++){
		cin >> mint[i] >> maxt[i];
		summax += maxt[i];
		summin += mint[i];
	}
	if(summin <= sumt && sumt <=summax ){
		cout << "YES" << endl;
		for(int i=1;i<=d;++i){
			int t = min(mint[i] + sumt - summin, maxt[i]);
			printf((i + 1 < d ? "%d" : "%d "), t);
			sumt -= (t-mint[i]);			
		}
	}
	else {
		cout << "NO" << endl;
	}
}
