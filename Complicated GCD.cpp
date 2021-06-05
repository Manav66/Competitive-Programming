#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
 
using namespace std;
char a[200];
char b[200];
int main()
{
    scanf("%s%s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    if(len1<len2) {printf("1\n");return 0;}
    else{
        for(int i=0;i<len1;i++){
            if(a[i]!=b[i]){
                printf("1\n");return 0;
            }
        }
        for(int i=0;i<len1;i++)
        printf("%c",a[i]);
        cout<<endl;
        return 0;
    }
 
}
