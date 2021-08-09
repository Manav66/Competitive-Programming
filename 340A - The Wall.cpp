#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int c = a % b;
    while(c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main()
{
    int x, y, a, b;
    
    cin >> x >> y >> a >> b ;

    int gc = gcd(x, y);

    int num = x * y / gc;

    cout << b / num - (a-1) / num << endl;

    return 0;
}
