#include<bits/stdc++.h>
using namespace std;
int main()
{
	int R,B,ans,x;
	cin>>R>>B;
	ans = min(R,B);
	cout<<ans<<" ";
	x = abs(R-B);
	x = x/2;
	cout<<x;
	return 0;
}
