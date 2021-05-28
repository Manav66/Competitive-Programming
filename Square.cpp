#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int t,a,b,a1,b1;
    cin >> t;
    
    while(t--){
        cin >> a >> b >> a1>> b1;
        
        if(a > b) swap(a,b);
        if(a1 > b1) swap(a1,b1);
        
        if(a + a1 == b && a + a1 == b1){
            cout << "Yes" << endl;
        } 
         
         else{
             cout << "No" << endl;
         }
    }
}
