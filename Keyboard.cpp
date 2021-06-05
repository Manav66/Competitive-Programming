#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int i,j;
    char c,s[100],s1[]= {'q','w','e','r','t','y','u','i','o','p'},s2[]= {'a','s','d','f','g','h','j','k','l',';'},s3[]= {'z','x','c','v','b','n','m',',','.','/'};
    scanf("%c",&c);
    scanf("%s",s);
    if(c=='L')
    {
        for(i=0; i<=strlen(s); i++)
        {
            for(j=9; j>=0; j--)
            {
                if(s[i]==s1[j])
                {
                    s[i]=s1[j+1];
                }
                else if(s[i]==s2[j])
                {
                    s[i]=s2[j+1];
                }
                else if(s[i]==s3[j])
                {
                    s[i]=s3[j+1];
                }
            }
        }
    }
    else if(c=='R')
    {
 
        for(i=0; i<strlen(s); i++)
        {
            for(j=0; j<10; j++)
            {
                if(s[i]==s1[j])
                {
                    s[i]=s1[j-1];
                }
                else if(s[i]==s2[j])
                {
                    s[i]=s2[j-1];
                }
                else if(s[i]==s3[j])
                {
                    s[i]=s3[j-1];
                }
            }
        }
    }
 
    printf("%s\n",s);
    return 0;
}
