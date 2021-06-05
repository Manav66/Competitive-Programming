#include<iostream>
 
using namespace std;
 
int main(){
    
    long long int n;
    cin >> n;
    
    if(n==1){
        cout << "9" << " " << "8";
    } else {
        cout << n*4 << " " << n*3;
    }
    return 0;
}
