#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,x,count=0;
	cin>>n>>m;
	x = n;
	for(int i=1; i<=x; i++)
	{
		count++;
		if(i%m==0)
			x++;
	}
	cout<<count;
	return 0;
}
