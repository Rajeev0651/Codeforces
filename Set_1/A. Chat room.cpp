#include<bits/stdc++.h>
using namespace std;
int main()
{
	char S[100],word[]="hello";
	int count=0,flag=0;
	cin>>S;
	for(int i=0; i<strlen(S); i++)
	{
		if(S[i]==word[count])
		{
			count++;
		}	
		if(count==5)
		{
			flag=1;
			break;
		}	
	}
	if(flag==1)
		cout<<"YES\n";
	else
		cout<<"NO\n";	
}
