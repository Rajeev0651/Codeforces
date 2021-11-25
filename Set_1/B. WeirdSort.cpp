#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string ans = "YES";
		int n,m,x;
		cin>>n>>m;
		int A[n+1],P[m+1],pos[n]={0},C[n];
		int G[105]={0};
		for(int i=1; i<=n; i++)
		{
			cin>>A[i];
			C[i] = A[i];	
		}
		for(int i=1; i<=m; i++)
		{
			cin>>P[i];
			G[P[i]]=1;
		}
		sort(C+1, C+n+1);
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<n; j++)
			{
				x=j+1;
				if(A[x]<A[j] && (G[j]==1))
				{
				//	cout<<A[i]<<"\n";
					swap(A[x],A[j]);
				}
			//	cout<<A[j]<<" "<<A[x]<<"\n";
			}	
		}
		for(int i=1; i<=n; i++)
		{
			if(A[i]!=C[i])
			{
				ans = "NO";
				break;
			}	
		}
		cout<<ans<<"\n";	
	}
	return 0;
}
