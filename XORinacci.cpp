#include<iostream>
#include<cstring>
#include<string>
#include<cstdio>
#include<set>
#include<bits/stdc++.h>
#include<algorithm>
 
using namespace std;
 
int main(){
    int T,a,b,n;
    
    cin >> T;
    while(T--){
        cin >> a >> b >> n;
         if(n%3==2) cout<<(a xor b)<<endl;
       else if(n%3==0) cout<<a<<endl;
       else if(n%3==1) cout<<b<<endl;
    }
}
