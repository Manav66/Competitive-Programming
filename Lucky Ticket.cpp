#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n;
    char s[100];
    cin>>n;
    cin>>s;
    int i,j,cnt,sum1=0,sum2=0;
    for(i=0;i<n;i++){
        if(s[i]!='4'&&s[i]!='7'){
            cout<<"NO"<<endl;
            return 0;
        }
        else{
            if(i<n/2)
                sum1+=s[i]-'0';
            else
                sum2+=s[i]-'0';
        }
    }
    if(sum1==sum2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
