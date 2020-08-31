#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,time=240,rem,x,count=0,m;
	cin>>n>>k;
	rem = time-k;
	x = 0;
	for(int i=1; x<=rem; i++)
	{
		m = 5*i;
		x+=m;
		if(x<=rem)
			count++;
	}
	if(count>n)
		count = n;
	cout<<count;
	return 0;
}
