#include<bits/stdc++.h>

using namespace std;

int eight(long long n)
{
    int count = 0;
    if(n<0)
    {
          n=-n;
    }
    while(n)
    {
        if(n%10==8)
        {
            count++;
        }
        n=n/10;
    }
    return count;
}

int main(){
	long long a;
	int count,m;	
	cin >> a;
	m=0;
	
	while(1){
		a++;
		m++;
		count = eight(a);
		if(count >=1){
			break;
		}				
	}
	cout << m << endl;	
}
