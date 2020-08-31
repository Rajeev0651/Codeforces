#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int N,count=0;
	cin>>N;
	long int A[N],B[N];
	for(int i=0; i<N; i++)
		cin>>A[i];
	for(int i=0; i<N; i++)
		cin>>B[i];
	for(int i=0; i<N-1; i++)
	{
		for(int j=i+1; j<N; j++)
		{
			if(A[i]+A[j]>B[i]+B[j])
				count++;
		}
	}
	cout<<count;
	return 0;		
}
