#include<bits/stdc++.h>
using namespace std;
int main()
{
	char S[100],count1=0,count2=0,flag=0;
	cin>>S;
	for(int i=0; i<strlen(S); i++)
	{
		if(S[i]=='0')
		{
			count1++;
			if(count1==7)
			{
				flag=1;
				break;
			}
			count2=0;	
		}
		else
		{
			count1=0;
			count2++;
			if(count2==7)
			{
				flag=1;
				break;
			}	
		}			
	}
	if(flag==1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	return 0;		
}
