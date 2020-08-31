#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,f=0;
	cin>>N;
	int A[N][3];
	for(int i=0; i<N; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>A[i][j];
		}
	}
	for(int i=0; i<3; i++)
	{	f = 0;
		for(int j=0; j<N; j++)
		{
			f+=A[j][i];
		}
		if(f!=0)
			{
				cout<<"NO\n";
				return 0;
			}
	}
	cout<<"YES\n";
	return 0;
}
