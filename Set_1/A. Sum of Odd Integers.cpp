#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,k;
		string ans;
		cin>>n>>k;
		if(n%2==0)
		{
			if(k%2==0)
				ans="YES";
			else
				ans="NO";	
		}
		else
		{
			if(k%2==0)
				ans="NO";
			else
				ans="YES";	
		}
		cout<<ans<<"\n";
	}
	return 0;
}
