#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,M,minm=INT_MAX;
		cin>>N>>M;
		int F[N+1],P[N+1],cost[M+1]={0};
		int x[M+1]={0};
		for(int i=1; i<=N; i++)
		{
			cin>>F[i];
			x[F[i]]=1;
		}
		for(int i=1; i<=N; i++)
		{
			cin>>P[i];
		}
		for(int i=1; i<=N; i++)
		{
			cost[F[i]]+=P[i];
		}
		for(int i=1; i<=N; i++)
		{
			if(x[F[i]]==1)
			{
				minm = min(minm,cost[F[i]]);
			}
		}
		cout<<minm<<"\n";
	}
	return 0;
}
