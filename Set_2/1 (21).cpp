#include<bits/stdc++.h>
using namespace std;
const int inf = 1e5;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,X,Y,one,two,three,four;
		int x[2],y[2];
		int maxx = inf,maxy = inf,minx = -inf,miny = -inf;
		x[0] = -100000; x[1] = 100000;
		y[0] = -100000; y[1] = 100000;
		cin>>N;
		for(int i=1; i<=N; i++)
		{
			cin>>X>>Y>>one>>two>>three>>four;
			if(one==0)
				minx = max(minx,X);
			if(two==0)
				maxy = min(maxy,Y);
			if(three==0)
				maxx = min(maxx,X);
			if(four==0)
				miny = max(miny,Y);		
		}
		if(minx>maxx || miny>maxy)
			cout<<"0\n";
		else
		{
			cout<<"1 "<<minx<<" "<<miny<<"\n";	
		}		
	}
	return 0;
}
