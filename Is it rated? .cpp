#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[5000],b[5000];
    cin>>n;

    int rated = 0;
    for(int m=0; m<n; m++){
        cin>>a[m]>>b[m];
        if(a[m] != b[m]){
            rated = 1;
        }
    }
    if(rated == 1){
        cout<<"rated" << endl;
        return 0;
    }

    for(int m=0; m<n-1; m++){
        for(int p=i+1; p<n; p++){
            if(a[m] < a[p]){
                rated = -1;
            }
        }
    }


    if(rated == -1){
        cout<<"unrated" << endl;
    }
    else{
        cout<<"maybe" << endl;
    }

    return 0;
}
