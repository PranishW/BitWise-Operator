#include <iostream>
using namespace std;
int main()
{
	int n = 5;
	int k = (1<<n)-1;
	int a = n<<1;
	int l = n>>1;
	cout<<k<<" "<<a<<" "<<l<<endl;
	int mask =10;
	mask = (mask&(1<<3));
	cout<<mask;
	return 0;
}
