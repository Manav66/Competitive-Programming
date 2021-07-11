#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x,y,z;
	int a[2010];
	set<int> st;	
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> a[i];
		st.insert(a[i]);
	}
	if(st.size() == 1) cout << "0" << endl;
	else if(st.size() == 2)
    {
         int x = *st.rbegin() - *st.begin();
         if(x % 2) cout << x;
         else cout << x / 2;
    }
    else if(st.size()==3&& (x=*st.begin(),y=*++(st.begin()),z=*st.rbegin(),z-y==y-x) )
		cout << z-y << endl;
	else 
		cout << "-1" << endl;
	return 0;
}
