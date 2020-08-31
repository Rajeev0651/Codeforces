#include<bits/stdc++.h>
using namespace std;
int main()
{
	long double n,m,a;
	long long int res;
	cin>>n>>m>>a;
	n = ceil(n/a);
	m = ceil(m/a);
	res = n*m;
	cout<<res;
	return 0;
}
