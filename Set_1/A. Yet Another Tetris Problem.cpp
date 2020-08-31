#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,maxm=-1;
		string ans = "YES";
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			maxm = max(maxm,A[i]);	
		}
		for(int i=0; i<N; i++)
		{
			if((A[i]-maxm)%2!=0)
			{
				ans = "NO";
				break;
			}	
		}
		cout<<ans<<"\n";		
	}
	return 0;
}
