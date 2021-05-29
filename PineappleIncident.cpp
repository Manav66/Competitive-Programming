#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t,s,x;
    cin >> t >> s >> x;
    if(x>t+1){
    if((x-t)%s==0||(x-t-1)%s==0){
        cout << "YES";
    }
    else
        cout << "NO";
    }
    else{
        if(x==t) 
            cout << "YES" ;
        else 
            cout << "NO" ;
    }
    return 0;
}
