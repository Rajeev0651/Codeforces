#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,val=0,count=0,a,b,c;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		cin>>a>>b>>c;
		val+=a+b+c;
		if(val>=2)
			count++;
		val=0;			
	}
	cout<<count;
	return 0;
}
