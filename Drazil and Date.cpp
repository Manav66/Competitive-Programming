#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, steps;
	cin >> a >> b >> steps;
		
		if (steps >= (abs(a) + abs(b)))
		{
			if (((steps - a - b) % 2) == 0)cout << "YES" << endl;
			else cout << "NO" << endl;
		}
		else cout << "NO" << endl;
}
