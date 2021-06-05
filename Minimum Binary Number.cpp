#include<bits/stdc++.h>
using namespace std;
#define sc1(x)              scanf("%d", &x)
#define sc2(x, y)           scanf("%d %d", &x, &y)
#define sc3(x, y, z)        scanf("%d %d %d", &x, &y, &z)
 
int main(){
   int a=0,b=0,c=0,d,i,j,k=0,n,m,ck=0;
   sc1(n);
   string arr,bb;
   cin>>arr;
   sort(arr.begin(), arr.end());   // sort the string
   reverse(arr.begin(), arr.end());   // reverse the string
    for(i=0; i<n; i++){
    if(arr[i]=='1' && arr[i+1]=='1'){
        continue;
    }
    else{
        cout<<arr[i];
    }
   }
   cout<<endl;
}
