#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1,x2,x3,mid,ans;
	cin>>x1>>x2>>x3;
	mid = max(x1,max(x2,x3))+min(x1,min(x2,x3));
	mid/=2;
	ans = (abs(x1-mid)+abs(x2-mid)+abs(x3-mid));
	cout<<ans;
	return 0;
}
