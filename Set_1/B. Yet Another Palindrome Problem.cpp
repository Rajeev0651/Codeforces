#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;string ans = "NO";
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<N-2; i++)
		{
			for(int j=i+2; j<N; j++)
			{
				if(A[i]==A[j])
				{
					ans = "YES";
					break;
				}
			}	
		}
		cout<<ans<<"\n";	
	}
	return 0;
}
