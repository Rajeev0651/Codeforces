#include<bits/stdc++.h>
using namespace std;
int val(char s)
{
	if(s=='R')
		return 0;
	if(s=='G')
		return 1; 
	return 2;		
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,K,m=3000,k=0,l,x,Y;
		cin>>N>>K;
		string S;
		cin>>S;
		int len = S.length();
		for(int i=0; i<=len-K; i++)
		{	x=0,Y=1;
			k = val(S[i]);
			for(int j=i; Y<=K; j++)
			{	Y++;
				l = val(S[j]);
				if(((k)%3)!=(l%3))
				{
					x++;	
					cout<<(k)%3<<" "<<l%3<<"\t";
				}
				k++;	
			}
			cout<<x<<"\n";
			m = min(m,x);
		}
		cout<<m<<"\n";
	}
	return 0;
}
