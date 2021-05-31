#include<bits/stdc++.h>  
using namespace std;  
typedef long long ll;  
const int inf = 0x3f3f3f3f;  
int main()   
{  
    // freopen("shuju.txt","r",stdin);
    ll a,b;
    ll x,y,z;
 
    cin>>a>>b;
    cin>>x>>y>>z;  
 
    ll ans=0;
    ll p=0,q=0;
    p+=2*x;
    p+=y;
    q+=y;
    q+=3*z;
    //printf("## %d %d\n",p,q);
    if(p>a)
        ans+=p-a;
    if(q>b)
        ans+=q-b;
    cout<<ans<<endl;
    return 0;  
}
