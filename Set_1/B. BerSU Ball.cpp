#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,M,ans=0,x;
	cin>>N;		int A[N];
	for(int i=0; i<N; i++)
	{
		cin>>A[i];
	}
	sort(A, A+N);
	cin>>M;		int B[M],b[105]={0};
	for(int i=0; i<M; i++)
	{
		cin>>B[i];
		b[B[i]]++;
	}
	for(int i=0; i<N; i++)
	{
		if(b[A[i]-1]>0)
		{
			ans++;
			b[A[i]-1]--;
			continue;
		}
		if(b[A[i]]>0)
		{
			ans++;
			b[A[i]]--;
			continue;
		}
		if(b[A[i]+1]>0)
		{
			ans++;
			b[A[i]+1]--;
			continue;
		}
	}
	cout<<ans;		
}
