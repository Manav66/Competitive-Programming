#include<bits/stdc++.h>

using namespace std;

int main(){
	long long a,b,c,x,y,z,sumleft=0,summake=0;
	while(cin>>a>>b>>c>>x>>y>>z){
	
	if(a>x && b>y && c>z)
		cout << "Yes" << endl;
		
	else{
		if(x>a)
			sumleft += x-a;
		else 
			summake += (a-x)/2;
		
		if(y>b)
			sumleft += y-b;
		else 
			summake += (b-y)/2;
		
		if(z>c)
			sumleft += z-c;
		else 
			summake += (c-z)/2;
		
		if(summake>=sumleft)
			cout << "Yes"<<endl;
		else 
			cout << "No" << endl;
	}
  }
	return 0;	
}
