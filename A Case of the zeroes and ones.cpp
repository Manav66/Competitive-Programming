#include<iostream>
#include<string>
#include<algorithm>
 
using namespace std;
 
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int zero = count(s.begin(), s.end(), '0');
    int ones = count(s.begin(), s.end(), '1');
    
    cout << n - (2 * min(zero,ones));
    
    
}
