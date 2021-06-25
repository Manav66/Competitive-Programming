#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int n,m;

char g[15][15];
int check[15][15];

int eaten=0,row,col;

int main(){

    cin>>row>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>g[i][j];
            check[i][j]=1;
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(check[i][j] && g[i][j]=='W'){
                if(i<row-1 && g[i+1][j]=='P') eaten++,check[i+1][j]=0;
                else if(i>=1 && g[i-1][j]=='P') eaten++,check[i-1][j]=0;
                else if(j<col-1 && g[i][j+1]=='P') eaten++,check[i][j+1]=0;
                else if(j>=1 && g[i][j-1]=='P') eaten++,check[i][j-1]=0;
            }
        }
    }
    cout<<eaten<<endl;
    return 0;
}
