#include<iostream>
 
using namespace std;
 
int main(){
    int n,i,j,ck=0,dk=0,a,b,c;
    
    cin >> n;
    
    int arr[n];
    
    for(i=0;i<n;i++){
        cin >> arr[i];
        
        if(arr[i]>0){
            ck +=arr[i];
        } else {
            dk += arr[i];
        }
    }
    
    cout << ck-dk ;
}
