#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int N,diff,odd=0,even=0,ans;
	cin>>N;
	long int A[N];
	for(int i=0; i<N; i++)
		cin>>A[i];	
	for(int i=0; i<N; i++)
	{
		if(A[i]%2==0)
			even++;
		else
			odd++;		
	}	
	if(odd<=even)
		ans = odd;
	else 
		ans = even;	
	cout<<ans;
	return 0;
}
