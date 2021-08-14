#include <iostream>
using namespace std;
 
int main() {
    long long int n,k,maxele=0,sum=0,a;
    cin>>n>>k;
    cin >> maxele;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(a>maxele)
        {
            maxele=a;
            sum=1;
        }
        else
        {
            sum++;
        }
        if(sum==k)
        break;
    }
    cout<<maxele<<endl;
}
