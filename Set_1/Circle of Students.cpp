#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,flag=0;
		cin>>N;
		int A[N];
		for(int i=0; i<N; i++) cin>>A[i];
		for(int i=0; i<N-1; i++)
		{
			if(A[i+1]!=A[i+1] && A[i]!=N)
				{flag=0;break;}
			if(A[i]==N && A[i+1]!=1)
				{flag=0;break;}
			if(i==N-2)
				flag=1;	
		}
		if(flag==1){cout<<"YES\n";continue;}
		for(int i=0; i<N-1; i++)
		{
			if((A[i]+1!=A[i-1]) && A[i]!=1)
				{flag=0;break;}
			if(A[i]==1 && A[i+1]!=N)
				{flag=0;break;}
			if(i==N-2)
				flag=1;	
		}
		if(flag==1){cout<<"YES\n";continue;}
		cout<<"NO\n";		
	}
	return 0;
}
