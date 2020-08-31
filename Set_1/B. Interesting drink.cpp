#include<bits/stdc++.h>
using namespace std;
#define ll int
ll last(ll A[], ll key, ll high) 
{ 
     int low = 0;
     int ans = -1;
     while(low<=high)
     {
     	int mid = (low+high)/2;
     	if(A[mid]<=key)
     		low = mid+1;
     	else
		{
		 	ans = mid;
			high = mid-1; 	
		}	
	 }
	 return ans;
} 
int main()
{
	ll N,M;
	cin>>N;
	ll A[N];
	for(ll i=0; i<N; i++)
		cin>>A[i];
	sort(A,A+N);	
	cin>>M;
	while(M--)
	{
		ll Q,ans;
		cin>>Q;
		if(Q>=A[N-1])
			ans = N;
		else	
			ans = last(A,Q,N);
		cout<<ans<<"\n";
	}
	return 0;
}
