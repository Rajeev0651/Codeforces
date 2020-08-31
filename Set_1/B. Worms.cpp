#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M;
	cin>>N;
	int A[N],sum[N+5];
	sum[0] = 0;
	for(int i=0; i<N; i++)
	{
		cin>>A[i];	
		sum[i+1] = sum[i]+A[i];
	}
	cin>>M;
	while(M--)
	{
		int Q,pos=1,ans;
		cin>>Q;
		for(int i=0; i<N; i++)
		{
			if(Q>sum[i] && Q<=sum[i+1])
			{
				ans = pos;
				break;
			}
			else pos++;
		}
		cout<<ans<<"\n";
	}
	return 0;	
}
