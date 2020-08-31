#include<bits/stdc++.h>
using namespace std;
int isprime(long long int n)
{
	if(n<=1)	return 0;
	if(n<=3)	return 1;
	if(n%2==0 || n%3==0)	return 0;
	for(long long int i=5; i*i<=n; i+=6)
		if(n%i==0 || n%(i+2)==0)
			return 0;
	return 1;		
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long long int a,b,x,y;
		cin>>a>>b;
		x = isprime(a+b);
		y = isprime(a-b);
		if((x==1 && (a-b)==1)||(y==1 && (a+b)==1))
		{
			cout<<"YES\n";
		}
		else
			cout<<"NO\n";
	}
	return 0;
}
