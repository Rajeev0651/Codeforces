#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		float a;
		float side;
		cin>>a;
		side = 360/(180-a);
		if(side==(int)side)
			cout<<"YES\n";
		else cout<<"NO\n";	
	}
}
