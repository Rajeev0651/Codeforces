#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll pos=0;
ll Y[1000001];
void SieveOfEratosthenes(ll n)
{
	bool prime[n+1];
	memset(prime, true, sizeof(prime));
	for(ll p=2; p*p<=n; p++)
	{
		if(prime[p]==true)
		{
			for(ll i=p*p; i<=n; i+=p)
				prime[i] = false;	
		}	
	}
	for(ll p=2; p<=n; p++)
	{
		if(prime[p])
		{
			Y[pos++] = p*p;
		}
	}	
} 
ll binarySearch(ll arr[], ll l, ll r, ll x) 
{ 
    if (r >= l) { 
        ll mid = l + (r - l) / 2; 
        if (arr[mid] == x) 
            return mid;
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
		}
    return -1; 
}
int main()
{
	ll N;
	SieveOfEratosthenes(1000000);
	cin>>N;
	while(N--)
	{
		ll X;
		cin>>X;
		if(binarySearch(Y, 0, pos-1, X)!=-1)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";	
	}
	return 0;
}
