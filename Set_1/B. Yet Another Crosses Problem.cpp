#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,ans=4000000; char x;
		cin>>n>>m;
		int R[n]={0},C[m]={0};
		char S[4*n][4*m];
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				cin>>x;
				S[i][j] = x;
				if(x=='.')
				{
					R[i]++;
					C[j]++;	
				}	
			}
		}
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<m; j++)
			{
				ans = min(ans,R[i]+C[j]-(S[i][j]=='.'));
			}
		}
		cout<<ans<<"\n";
	}
	return 0;
}
