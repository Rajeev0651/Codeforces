#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,ans=0;
	cin>>N;
		ans+= (N/100);
		N%=100;
		ans+= (N/20);
		N%=20;
		ans+= (N/10);
		N%=10;
		ans+= (N/5);
		N%=5;
		ans+= N;
	cout<<ans;
	return 0;
}
