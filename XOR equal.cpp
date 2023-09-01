// Find the no of bits that need to be changed to make num2 equal to num1
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int num1,num2;
	cout<<"Enter 2 nos :- ";
	cin>>num1>>num2;
	int answer =0;
	if((num1<0 and num2>=0) or (num2<0 and num1>=0))
		answer++;
	num1 = abs(num1);
	num2 = abs(num2);
	int x = num1^num2;
	cout<<"x = "<<x<<endl;
	while(x>0)
	{
		if(x%2==1)
			answer++;
		x/=2;
	}
	cout<<"Answer :- "<<answer<<endl;
	return 0;
}
