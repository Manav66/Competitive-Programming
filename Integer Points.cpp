#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		long long n,m;
		long long m_odd=0,m_even=0,n_odd=0,n_even=0;
		
		cin >> n;
		
		for(int i=0;i<n;i++){
			long long x;
			cin >> x;
			if(x%2==0)
				m_even++;
			else
				m_odd++;
		}
		
		cin >> m;
		
		for(int i=0;i<m;i++){
			long long x;
			cin >> x;
			if(x%2==0)
				n_even++;
			else
				n_odd++;			
		}
		
		long long count = m_even * n_even + m_odd * n_odd;
		cout << count << endl;	
	}
	return 0;
}
