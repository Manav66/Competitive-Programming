#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    int a,b,c,d;
    int x,y,max1;
    int u,v,max2;
    cin >> a >> b >> c >> d;
    
    x = (3 * a) / 10;
    y = a - ((a / 250) * c);
    
    max1 = max(x,y);
    
    u = (3 * b) / 10;
    v = b - ((b / 250) * d);
    
    max2 = max(u,v);
    
    if(max1 > max2) cout << "Misha";
    else if (max2 > max1) cout << "Vasya";
    else cout << "Tie";
    
}
