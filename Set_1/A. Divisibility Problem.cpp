//https://codeforces.com/contest/1328/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int a,b,k;
		cin>>a>>b;
		k = b-(a%b);
		if(k==b)
			k = 0; 
		cout<<k<<"\n";
	}
	return 0;
}
