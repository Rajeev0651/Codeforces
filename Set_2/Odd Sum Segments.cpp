#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K,odd=0,j;
		cin>>N>>K;
		int A[N];
		for(int i=0; i<N; i++)
		{
			cin>>A[i];
			if(A[i]%2==1)
				odd++;
		}
		if(odd<K || odd%2!=K%2)
		{
			cout<<"NO\n";
			continue;
		}
		cout<<"YES\n";
		for(int i=0; i<N; i++)
		{	if(K==1)break;
			if(A[i]%2==1)
			{	
				cout<<i+1<<" ";
				K--;
			}
		}
		cout<<N<<"\n";
	}
	return 0;
}
