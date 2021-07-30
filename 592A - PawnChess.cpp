#include<bits/stdc++.h>

using namespace std;

int main(){
	int i,j;
	char arr[8][8];
	for(i=0;i<8;i++){
		cin >> arr[i];
	}
	int minimuma = 999999, minimumb = 999999;
	
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(arr[j][i] == 'B')
				break;
			if(arr[j][i] == 'W') {
				minimuma = min(minimuma,j);
				break;
			}			
		}
	}
	for(i=0;i<8;i++){
		for(j=7;j>=0;j--){
			if(arr[j][i] == 'W')
				break;
			if(arr[j][i] == 'B'){
				minimumb = min(minimumb, 8-j);
				break;
			}
		}
	}	
	if(minimuma < minimumb)
		cout << "A" << endl;
	else 
		cout << "B" << endl;
	return 0;
}
