#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int N,flag=0,area,val;
		cin>>N;
		long long int A[4*N];
		for(int i=0; i<4*N; i++)
			cin>>A[i];
		sort(A,A+(4*N));
		for(int i=0; i<4*N-1; i+=2)
		{
			if(A[i]!=A[i+1])
			{
				flag=1;
				break;
			}	
		}
		if(flag==1)
		{
			cout<<"NO\n";	continue;
		}
		area = A[0]*A[4*N-1];
		for(int i=0,j=4*N-1; i<j; i+=2,j-=2)
		{
			val = A[i]*A[j];
			if(val!=area)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			cout<<"YES\n";
		else
			cout<<"NO\n";		
	}
	return 0;	
}
