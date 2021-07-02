#include<bits/stdc++.h>

using namespace std;

int main(){
	long long i,j,n,count,m;
	char s[101][101], check;
	
	while(cin >> n >> m >> check) {
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				cin >> s[i][j];
			}
		}
		
		count=0;
		bool mark[100];
		for(i='A';i<='Z';i++){
			mark[i]=0;
		}
		mark[check]=1;
		mark['.'] = 1;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(s[i][j]==check){
					if(mark[s[i][j+1]]==0 && j+1<m){
                            count++;
                            mark[s[i][j+1]]=1;
                            
                    }
                    if(mark[s[i][j-1]]==0 && j-1>=0){
                            count++;
                            mark[s[i][j-1]]=1;
                            
                    }
                    if(mark[s[i+1][j]]==0 && i+1<n){
                            count++;
                            mark[s[i+1][j]]=1;
                                                }
                    if(mark[s[i-1][j]]==0 && i-1>=0){
                            count++;
                            mark[s[i-1][j]]=1;
                           
                    }
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
