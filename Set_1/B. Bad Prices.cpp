#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,ans=0;
		cin>>N;
		long int A[N];
		for(long int i=0; i<N; i++)
			cin>>A[i];
		for(long int i=0; i<N-1; i++)
		{
			for(long int j=i+1; j<N; j++)
			{
				if(A[j]<A[i])
				{
					ans++;
					break;	
				}	
			}	
		}
		cout<<ans<<"\n";	
	}
	return 0;
}
