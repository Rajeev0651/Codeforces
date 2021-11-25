#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,K,a,ans;
	cin>>N>>K;
	a = ceil(N*0.5);
	if(K<=a)
	{
		ans = 1+(K-1)*2;
	}
	else if(K>a)
	{
		ans = 2+(K-a-1)*2;
	}
	cout<<ans;
	return 0;
}
