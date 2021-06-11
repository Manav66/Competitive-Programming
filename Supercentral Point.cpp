#include<bits/stdc++.h>
#include<iostream>

using namespace std;

int main(){
	long long n,left,right,up,down,i,j,x,y;
	while(cin >> n){
		long long M[n+1],N[n+1];
		for(i=0;i<n;i++){
			cin >> M[i]>>N[i];
		}
		
		long long count = 0;
		for(i=0;i<n;i++){
			left=right=up=down=0;
			x=M[i];
			y=N[i];
			for(j=0;j<n;j++){
				if(M[j]==x){
					if(N[j]>y)
						up++;
					if(N[j]<y)
						down++;					
				}
				if(N[j]==y){
					if(M[j]>x)
						right++;
					if(M[j]<x)
						left++;
				}
			}
			
			if(left>0 && right>0 && up>0 && down>0){
				count++;
			}
		}
		cout << count << endl;
		
	}
}
