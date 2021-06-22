#include<bits/stdc++.h>
using namespace std;
int c[1000];
int main()
{
    int p,m,i,j,x,maxx=0,ans=0;
    scanf("%d%d",&p,&m);
    int a[m][p],b[100],y;
    for(i=0;i<m;i++){
        for(j=0;j<p;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        maxx=a[i][0];
        b[i]=1;
        for(j=0;j<p;j++){
            if(a[i][j]>maxx){
                maxx=a[i][j];
                b[i]=j+1;
            }
        }
        x=b[i];
        c[x]++;

    }
    y=0;
    ans=1;
    for(i=1;i<=100;i++){
        if(c[i]>y){
            y=c[i];
            ans=i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
