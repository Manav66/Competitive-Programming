
#include<bits/stdc++.h>
 
 
 
typedef long long ll;
 
 
using namespace std;
 
 
int sumofdigits(ll n)
				{ 
				int sum=0 ; 
		while(n!=0)	{ 
		sum+=n%10; n/=10; 
		} 
return sum; 
}
 
 
int main() {
    
 int t=1;
 cin>>t;
 while(t--)
 {   
      set<string> ourset;
      ll n; 
	  cin>>n;
      string str;
	   cin>>str;
      int check=0;
      
      for(int i=0;i<n;i++)
      {
          string st=""; st+=str[i];
          ourset.insert(st);
      }
      
     
     for(int i=0; i<n-1;i++)
     {
         string st=""; st+=str[i]; st+=str[i+1];
         ourset.insert(st);
         
     }
     
     for(int i=0; i<n-2;i++)
     {
         string st=""; st+=str[i]; st+=str[i+1]; st+=str[i+2];
         ourset.insert(st);
     }
     
     for(char i='a'; i<='z' ; i++)
     {
         string st=""; st+=i;
         if(!ourset.count(st)>0)
         {
             cout<<st<<endl; check=1;
             break; 
         }
     }
     
     if(check==1)
     continue;
     
     for(char i='a'; i<='z' ; i++)
     {
         string st=""; st+=i;
         for(char j='a'; j<='z' ; j++)
         {
             string st1=st; st1+=j;
            if(!ourset.count(st1)>0)
            {
               cout<<st1<<endl; check=1;
               break; 
            }
         }
         
         if(check==1)break;
         
     }
     
     
     
     if(check==1)
     continue;
 
       for(char i='a'; i<='z' ; i++)
       {
           string st=""; st+=i;
           for(char j='a'; j<='z' ; j++)
           {
               string st1=st;
               st1+=j;
               for(char k='a'; k<='z' ; k++)
               {
                   string st2=st1;
                   st2+=k;
                   if(!ourset.count(st2)>0)
                {
                   cout<<st2<<endl; check=1;
                   break; 
                 }
                   
               }
               if(check==1)break;
               
           }
           if(check==1)break;
       }
       
     
     
      
 }
 
 return 0;
}
