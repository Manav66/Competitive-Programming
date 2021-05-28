#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    bool flag;
    cin>>n;
    while(n--)
    {
        flag=0;
        cin>>x;
        for(int i=0; i<=100; i++)
            for(int j=0; j<=100; j++)
            {
                if(x==i*3+j*7)
                {
                    flag=1;
                    break;
                }
            }
        if(flag)
            puts("YES");
        else
            puts("NO");
    }
    return 0;
}
