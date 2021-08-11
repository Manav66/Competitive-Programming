#include<bits/stdc++.h>
using namespace std;

int main(){
	int i,n,x,arr[8] = {0};
	cin >> n;
	
	for(i=0;i<n;++i){
		cin >> x;
		arr[x] += 1;
	}
	if (arr[5] == 0 && arr[7] == 0 && arr[2] >= arr[4] && arr[1] == arr[4] + arr[6] && arr[2] + arr[3] == arr[4] + arr[6]) {
		for(i=0;i<arr[4];++i){
			cout << "1" << " " << "2" << " " << "4" << endl;
		}
		arr[2] -= arr[4];
        for (i = 0; i < arr[2]; ++i)
        {
            cout << "1" << " " << "2" << " " << "6" << endl;
        }
        for (i = 0; i < arr[3]; ++i)
        {
            cout << "1" << " " << "3" << " " << "6" << endl;
        }
	}
	else {
		cout << "-1" << endl;
	}
}
