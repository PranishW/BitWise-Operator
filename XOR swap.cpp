#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a=1,b=2;  // b^b = 0 
	a = a^b; 		// 0 ^ b = b
	b = b^a;  // b = b^(a^b) i.e. b = a^b^b = a^0 = a
	a = a^b;  // a = (a^b)^a i.e. b = a^a^b = 0^b = b 
	cout<< a<<" "<<b;
}
