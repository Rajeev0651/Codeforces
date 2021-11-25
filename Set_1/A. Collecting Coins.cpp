#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int a,b,c,n,large,x1,x2,x3;
		cin>>a>>b>>c>>n;
		large = max(a,max(b,c));
		x1 = large-a;
		x2 = large-b;
		x3 = large-c;
		if(x1+x2+x3<=n)
		{
			n = n-(x1+x2+x3);
			if(n%3==0)
				cout<<"YES\n";
			else
				cout<<"NO\n";		
		}	
		else
			cout<<"NO\n";
	}
	return 0;
}
