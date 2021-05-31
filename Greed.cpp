#include<bits/stdc++.h>

using namespace std;
const int maxn = 1e5 + 5;

int main(){
    long long n;
    cin >> n;
    long long a[maxn], b[maxn];
    long long i,j,sum=0;
    
    for(i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    
    for(i=0;i<n;i++){
        cin >> b[i];
    }
    
    sort(b, b + n);
    int max1 = b[n-1];
    int max2 = b[n-2];
    
    if(sum <= max1 + max2) cout << "YES";
    else cout << "NO";
    return 0;
}
