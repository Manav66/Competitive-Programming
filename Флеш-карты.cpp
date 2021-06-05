#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
 
using namespace std;
 
 
int main()
{
 
#ifndef ONLINE_JUDGE
    freopen("c.in" , "r" , stdin);
#endif // ONLINE_JUDGE
 
    vector<int> vi;
    long long  n , m ,counter = 0;
 
    cin >> n >> m;
    while(n--)
    {
        int a;
        cin >> a;
        vi.push_back(a);
    }
 
    sort(vi.begin() , vi.end());
 
    for(int i = vi.size()-1 ; i >= 0 ; i--)
    {
        if(m > 0)
        {
 
            counter ++;
            m-= vi[i];
 
        }
        else
        {
            break;
        }
    }
 
 
    cout << counter;
 
 
    return 0;
}
