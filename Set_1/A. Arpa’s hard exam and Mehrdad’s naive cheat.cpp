#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,ans=1;
	cin>>N;
	if(N!=0)
	switch(N%4)
	{
		case 0 : ans = 6; break;
		case 1 : ans = 8; break;
		case 2 : ans = 4; break;
		case 3 : ans = 2; break;
		default : ans = 1;
	}
	cout<<ans;
	return 0;
}
