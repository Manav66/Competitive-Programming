#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    int l,r,a;
    cin >> l >> r >> a;
    if(l < r){
        while(l < r && a > 0){
            l++;
            a--;
        }
        cout << 2 * min(l + a / 2, r + a / 2) << endl;
    }
    else if(l > r){
        while(l > r && a > 0){
            r++;
            a--;
        }
        cout << 2 * min(l + a / 2, r + a / 2) << endl;
    }
    else if(l == r){
        cout << (l + a / 2) * 2 << endl;
    }
    return 0;
}
