#include <iostream>
 
using namespace std;
 
int main()
{
    int n, m[30][30], r[30] = {0}, c[30] = {0}, win(0);
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> m[i][j];
            r[i] += m[i][j];
        }
    }
    for (int j = 0; j < n; ++j)
    {
        for (int i = 0; i < n; ++i)
        {
            c[j] += m[i][j];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (r[i] < c[j])
            {
                win += 1;
            }
        }
    }
    cout << win << endl;
    return 0;
}
