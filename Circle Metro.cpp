#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main()
 {
     int n,a,b,x,y;
     while(cin >> n >> a >> x >> b >> y)
     {
         bool flag = false;
         for(int i = a,j = b;;i++,j--)
         {
             if(i == n + 1) i = 1;
             if(j == 0) j = n;
             if(i == j)
            {
                 flag = true;break;
             }
             if(i == x ||  j == y) break;
         }
         if(flag) cout << "YES" << endl;
         else cout << "NO" << endl;
     }
     return 0;
}
