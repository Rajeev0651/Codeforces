#include<bits/stdc++.h>
using namespace std;
int check(char x)
{
	switch(x)
	{
		case 'A' : return 0;
		case 'a' : return 0;
		case 'O' : return 0;
		case 'o' : return 0;
		case 'Y' : return 0;
		case 'y' : return 0;
		case 'E' : return 0;
		case 'e' : return 0;
		case 'U' : return 0;
		case 'u' : return 0;
		case 'I' : return 0;
		case 'i' : return 0;
		default :  return 1;
	}
	return 1;
}
int main()
{
	char S[100],R[100],l=0;
	cin>>S;
	for(int i=0; i<strlen(S); i++)
	{
		if(check(S[i]))
			R[l++] = S[i];
	}
	for(int i=0; i<l; i++)
	{
		cout<<".";
		int x = R[i];
		if((x>=65) && (x<=90))
		{
			char p = R[i]+32;
			cout<<p;
		}
		else
			cout<<R[i];
	}
	return 0;
}
