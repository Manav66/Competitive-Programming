#include<bits/stdc++.h>
#define ll long long
#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
 
using namespace std;
 
 
void solve(){
    ll n,x;
    cin>>n;
    set<ll> m;
    vector<ll> array(n);
    for(ll i=0;i<n;i++){
        cin>>array[i];
        m.insert(array[i]);
    }
    queue<ll> p;
    for(ll i=1;i<n;i++){
        for(ll j=0;j<i;j++){
            p.push(abs(array[i]-array[j]));
        }
    }
    while(!p.empty() && m.size()<=300){
        ll x=p.front();
        p.pop();
        if(m.count(x)){
            continue;
        }
        for(ll i=0;i<array.size();i++){
            p.push(abs(x-array[i]));
        }
        array.push_back(x);
        m.insert(x);
    }
    if(m.size()<=300){
        cout<<"YES"<<endl;
        cout<<m.size()<<endl;
        for(auto x:m){
            cout << x <<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
 
int main(){
    FAST1;
    FAST2;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
