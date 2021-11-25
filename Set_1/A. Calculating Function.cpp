#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,sum1,sum2,sum=0;
	cin>>N;
	sum = ceil(N*0.5);
	if(N%2==1)
		sum = sum*-1;		
	cout<<sum;
	return 0;
}
