#include<bits/stdc++.h>
 
using namespace std;
int main(){
int n;
cin>>n;
while(n--){
int t;
cin>>t;
int ma=0,mi=1000000000;
for(int i=0;i<t;i++){
int l,r;
cin>>l>>r;
ma=max(ma,l);
mi=min(mi,r);
}
cout<<max(ma-mi,0)<<endl;
}
}
