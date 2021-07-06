#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	string a;
	cin >> n;
	cin >> a;
	
	if(n%3 ==0){
		cout << a[0] << a[1] << a[2];
		for(int i=3;i<n;i=i+3){
			cout << '-' << a[i] << a[i+1] << a[i+2];
		}
		cout << endl;
	}
	else if(n%3 ==1){
		cout << a[0] << a[1] << '-' << a[2] << a[3];
		for(int i=4;i<n;i=i+3){
			cout << '-' << a[i] << a[i+1] << a[i+2];
		}
		cout << endl;
	}
	else{
        cout<<a[0]<<a[1];
        for(int i=2;i<n;i=i+3){
            cout<<'-'<<a[i]<<a[i+1]<<a[i+2];
        }
    cout<<endl;
    }
}
