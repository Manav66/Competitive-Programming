#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n,a,p,i,sum=0,price=101;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> p;
        if(p<price){
            price = p;
        }
        sum = sum + (a * price);
    }
     cout << sum;
}
