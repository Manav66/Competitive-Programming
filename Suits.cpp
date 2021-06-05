#include<iostream>
 
#include<math.h>
 
using namespace std;
 
int main()
 
{
 
    long long  a,b,c,d,e,f,value=0,s1=0,s2=0,x1,x2,dd;
 
    cin>>a>>b>>c>>d>>e>>f;
 
    if(f>e)
 
    {
 
        x1=min(min(b,c),d);
 
        s1=x1*f;
 
        dd=d-x1;
 
        if(dd>0)
 
        {
 
            x2=min(a,dd);
 
            s2=x2*e;
 
        }
 
        value=s1+s2;
 
        cout<<value<<endl;
 
    }
 
    else if(e>f)
 
    {
 
        x1=min(a,d);
 
        s1=x1*e;
 
        dd=d-x1;
 
        if(dd>0)
 
        {
 
            x2=min(min(b,c),dd);
 
            s2=x2*f;
 
        }
 
        value=s1+s2;
 
        cout<<value<<endl;
 
    }
 
    else
 
    {
 
        x1=min(a,d);
 
        s1=x1*e;
 
        dd=d-x1;
 
        if(dd>0)
 
        {
 
            x2=min(min(b,c),dd);
 
            s2=x2*f;
 
        }
 
        value=s1+s2;
 
        cout<<value<<endl;
 
    }
 
}
