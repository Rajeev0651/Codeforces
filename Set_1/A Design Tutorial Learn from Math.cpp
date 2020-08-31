#include<bits/stdc++.h>
using namespace std;
int nprime(int x)
{
	for(int i=2; i<=x/2; i++)
	{
		if(x%i==0)
			return 1;
	}
	return 0;
}
int main()
{
	int N,diff;
	cin>>N;
	for(int i=4,diff=N-4; i<N; i++,diff--)
	{	
		if(nprime(i) && nprime(diff))
		{
			cout<<i<<" "<<diff;
			break;
		}
	}
	return 0;
}
