#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
 
using namespace std;
 
char s[1005];
int main()
{
    scanf("%s",s);
    int l = (int)strlen(s);
    for(int i = 0;i < l;i++)
    {
        printf("%c",s[i]);
    }
    for(int i = l - 1;i >= 0;i--)
    {
        printf("%c",s[i]);
    }
    return 0;
}
