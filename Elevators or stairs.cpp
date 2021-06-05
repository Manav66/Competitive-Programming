#include<iostream>
#include <cstdlib>
 
using namespace std;
 
int main(){
    int x,y,z,t1,t2,t3;
    int d, diff;
    int f, floor;
    int st=0, ele=0;
    
    cin >> x >> y >> z >> t1 >> t2 >> t3;
        d = x - y;
        diff = abs(d);
        
        f = x - z;
        floor = abs(f);
        
        st = diff * t1;
        
        if( x == z){
            ele = (diff * t2) + (3 * t3); 
        } else {
            ele = (floor * t2) + ( diff * t2 ) + (3 * t3);
        }
        
        if(st < ele) cout << "NO";
        else cout << "YES";
        
}
