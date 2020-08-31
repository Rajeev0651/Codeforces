#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int K,N,W,pay=0,ans;
	cin>>K>>N>>W;
	for(long int i=1; i<=W; i++)
	{
		pay+=(K*i);
	}
	pay = pay-N;
	if(pay<=0)
		ans = 0;
	else
		ans = pay;
	cout<<ans;
	return 0;		
}
