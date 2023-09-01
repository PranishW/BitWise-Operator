// Given array of integers. All integers are present in 
// even count except one. Find the integer with odd count
// testcase - n = 9 arr[] = {2,4,6,7,7,4,2,2,2} res = 6
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,res=0;
	cout<<"Enter the no of elements :- ";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements :- ";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	for(int i=0;i<n;i++)
		res = res^arr[i];
	cout<<"Element in the array with odd count = "<<res;
	return 0;
}
