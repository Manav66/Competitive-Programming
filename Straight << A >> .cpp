#include <bits/stdc++.h>

using namespace std;
int main ()

{
 int n,k,i,sum=0,need=0,m[100];
 double f,g;
 cin>>n>>k;
 for (i=0;i <n;i++) {
  cin>>m [i];
  sum+=m [i];
 }
 f=k-0.5;
 g=(double)sum/n;
 while (g<f){
  sum+=k;
  need++;
  n++;
  g=(double)(sum)/n;
 }
 cout <<need<<endl;
 return 0;
}
