#include<cstdio>
int a[105];
int main()
{
    int n,k,i,cnt=0,num=0;
    scanf("%d%d",&n,&k);
    {
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            {
                cnt++;
                num=num+a[i];
                if(num>8)
                    {
                        k=k-8;
                        num=num-8;
                    }
                else
                    {
                        k=k-num;
                        num=0;
                    }
                    if(k<=0)
                    break;
                }
            if(i==n)
            cnt=-1;
            printf("%d\n",cnt);
        }
        return 0;
}
