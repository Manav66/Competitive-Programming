#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	char s[305][305];
	while(cin >> n && n!=EOF){
		int check = 0;
		char check1,check2;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cin >> s[i][j];
				if(i==0&&j==0)
					check1 = s[i][j];	
				else if(i==0&&j==1)
					check2 = s[i][j];
				if((i==j||i==n-1-j)&&s[i][j]!=check1){
					check = 1;
				}			
				
				else if(!(i==j||i==n-1-j)&&s[i][j]!=check2){
					check =1;
				}	
			}
		}	
		
		if(check1 == check2){
			check = 1;
		}
		
		if(check ==0)
			cout << "YES" << endl;
		
		else
			cout << "NO" << endl;
	}
}
