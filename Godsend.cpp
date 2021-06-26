#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);

    long long i;
    long long n;
    long long odd=0,even=0;

    cin >> n;

    long long a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];

        if(a[i]%2==0)
            even++;
        else
            odd++;
    }

    if(even==n)
    {
        cout<<"Second";
        return 0;
    }

    else
        cout<<"First";

    return 0;
}
