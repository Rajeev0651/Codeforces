#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,x,y,len=0,left,flag=0;
		char S[1000000];
		cin>>N;
		int X[1000]={-1},Y[1000]={-1};
		for(int i=0; i<N; i++)
		{
			cin>>x>>y;
			X[i] = x;
			Y[i] = y;
		}
		for(int i=0; i<N; i++)
		{
			for(int j=i+1; j<N; j++)
			{
				if(X[j]<X[i])
				{
					swap(X[i],X[j]);
					swap(Y[i],Y[j]);
				}	
			}	
		}
		int a=0,b=0,r=0,u=0,total=0,k;
		int MAX=Y[0];
		for(int i=0; i<N; i++)
		{
			MAX = max(MAX,Y[i]);	
			if(Y[i]<MAX && X[i]!=X[i-1])
			{
				cout<<"NO\n";
				flag=1;
				break;
			}		
		}
		if(flag==0)
		{
			for(int i=0; i<N; i++)
		{
			for(int j=i+1; j<N; j++)
			{
				if(Y[j]<Y[i])
				{
					swap(X[i],X[j]);
					swap(Y[i],Y[j]);
				}	
			}	
		}
		for(int i=0; i<N; i++)
		{
			r = X[i]-a;
			u = Y[i]-b;
			total+=r+u;
			for(int i=1; i<=r; i++)
				S[len++] = 'R';	
			for(int i=1; i<=u; i++)
				S[len++] = 'U';
			a = X[i];
			b = Y[i];
		}
		    cout<<"YES\n";
			for(int i=0; i<len; i++)
			{
				cout<<S[i];	
			}
			cout<<"\n";	
		}	
		}
	return 0;
}
