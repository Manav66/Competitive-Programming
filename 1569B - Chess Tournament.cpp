#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"

#define pb push_back
typedef long long ll; 

void manav(){
   int t;
   cin >> t;
   while(t--){
   	int n;
   	string s,ans[50];
   	cin >> n >> s;
 	vector<int> vec;
	for(int i=0;i<n;i++){
		ans[i] = string(n,'=');
		ans[i][i] = 'X';
		if(s[i]=='2')
			vec.pb(i);
	} 		
   	if(vec.size()==1 || vec.size() ==2){
   		cout << "NO" << endl;
   		continue;
	   }
	   cout << "YES" << endl;
	   for(int i=0;i<vec.size();i++){
	   	int k = vec[i];
	   	int m = vec[(i+1)%vec.size()];
	   	ans[k][m] = '+';
	   	ans[m][k] = '-';
	   }
	   for(int i=0;i<n;i++)
	   		cout << ans[i] << endl;
   }
}

int main(){
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	manav();
	return 0;
}
