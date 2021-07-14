#include <bits/stdc++.h>
using namespace std;

const int MAXN =100000;
int Arv[MAXN +3];
int main () 
	{ 
	    int n;
		cin >>n; 
		for(int i =0; i < n; i++) 
			cin >>Arv[i];
		 sort (Arv, Arv +n);     
		 int jud[MAXN +3], Len =0; 
			jud[Len++] = Arv[0];
		 for(int i =1; i < n; i++){
		 if(Arv[i]!= Arv[i-1]) 
		  jud[Len++] =Arv[i]; 
		 }
		 if(Len ==1|| Len ==2|| (Len ==3&& jud[2] + jud[0] == jud[1] *2))
		 	cout <<"YES"<<endl; 
		 else 
		 	cout <<"NO"<<endl; 
		
		return 0; 
	}
