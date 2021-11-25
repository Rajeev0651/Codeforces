#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n,t;
	cin>>n>>t;
	if(n==1 && t==10)
		cout<<"-1";
	else if(t==10 && n>1)
	{
		for(int i=1; i<n; i++)
		{	
			cout<<"1";
		}
		cout<<"0";	
	}
	else
	{
		for(int i=1; i<=n; i++)
		{	
			cout<<t;
		}	
	}	
	return 0;
}
