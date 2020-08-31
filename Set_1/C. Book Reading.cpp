#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		unsigned long long int p,N,M,dsum=0,x,tim,rem,last,ans=0;
		cin>>N>>M;
		tim = N/M;
		if(tim<10)
		{
			for(unsigned long long int i=1; i<=tim; i++)
			{
				last = (M*i)%10;
				dsum+=last;
			}
			ans = dsum;
			cout<<ans<<"\n";continue;
		}
		x = tim/10;
		rem = N%(M*10);	
		for(unsigned long long int i=1; i<=10; i++)
		{
			last = (M*i)%10;
			dsum+=last;
		}
		ans = dsum*x;
		dsum=0;
		x = x*10*M;
		for(unsigned long long int i=x+1; i<=N; i++)
		{
			if(i%M==0)
			{	p = i%10;
				dsum = dsum+p;
			}
		}
		ans+=dsum;
		cout<<ans<<"\n";
	}
	return 0;
}
