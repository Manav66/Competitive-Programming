#include<iostream>
 
using namespace std;
 
int main(){
    int i,n,d,minute = 0;
    
    cin >> n >> d;
    int a[n];
    for(i=0;i<n;i++){
        cin >> a[i];
    }
    for(i=0;i<n;i++){
        minute+= a[i];
    }
    n--;
    if(d < (n * 10) + minute){
        cout << "-1";
    }
     
     else {
         minute = d - minute;
         cout << minute/5;
     }
}
