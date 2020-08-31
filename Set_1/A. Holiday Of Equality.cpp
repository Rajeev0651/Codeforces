#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,max,sum=0,diff;
	cin>>N;
	int A[N];
	for(int i=0; i<N; i++)
		cin>>A[i];
	max = A[0];	
	for(int i=1; i<N; i++)
	{
		if(A[i]>max)
			max = A[i];
	}
	for(int i=0; i<N; i++)
	{
		diff = max-A[i];
		sum+=diff;	
	}
	cout<<sum;
	return 0;	
}
