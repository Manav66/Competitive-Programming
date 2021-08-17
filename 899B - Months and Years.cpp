#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,i;
	string inputyear,check="",year1,year2,year3="";
	cin >> n;
	
	year1 = "312831303130313130313031";
	year2 = "312931303130313130313031";
	year3 = year1 + year1 + year2 + year1 + year1;
	
	while(n--){
		cin >> inputyear;
		check += inputyear;
	}
	
	if(year3.find(check) != -1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
}
