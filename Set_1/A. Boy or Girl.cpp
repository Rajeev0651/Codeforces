#include<bits/stdc++.h>
using namespace std;
int main()
{
	char S[100],flag=0,c=0;
	cin>>S;
	int count[26]={0};
	for(int i=0; i<strlen(S); i++)
	{
		count[S[i]-97]=1;	
	}
	for(int i=0; i<26; i++)
	{
		if(count[i]==1)
			c++;
	}
	if(c%2==1)
		cout<<"IGNORE HIM!\n";
	else
		cout<<"CHAT WITH HER!\n";
		return 0;	
}
