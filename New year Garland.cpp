#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    int t;
    long long int a[4];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]<a[2]-1)
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }
    return 0;
}
