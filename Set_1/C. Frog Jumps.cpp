#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s[200002];
		int d=1,maxm=-1;
		cin>>s;
		for(int i=strlen(s)-1; i>=0; i--)
		{
			if(s[i]!='R')
			{
				d++;
			//	maxm = max(maxm,d);	
			}
			else
			{
				maxm = max(maxm,d);
				d=1;
			}	
		}
		d=1;
		for(int i=0; i<strlen(s); i++)
		{
			if(s[i]!='R')
			{
				d++;
				maxm = max(d,maxm);
			}
			else
			{
				maxm = max(maxm,d);
				break;
			}
		}
		cout<<maxm<<"\n";
	}
	return 0;
}
