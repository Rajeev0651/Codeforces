#include<bits/stdc++.h>
using namespace std;
int main()
{
	char S[1000];
	cin>>S;
	if(S[0]>=97)
		S[0] = S[0]-32;
	cout<<S;
	return 0;	
}
