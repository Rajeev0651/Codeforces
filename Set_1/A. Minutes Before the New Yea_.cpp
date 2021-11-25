#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int h,m,ans;
		cin>>h>>m;
		ans = (23-h)*60 + (60-m);
		cout<<ans<<"\n";
	}
	return 0;
}
