#include<bits/stdc++.h>
using namespace std;
int main()
{
	char S[100],count=0;
	cin>>S;
	int A[(strlen(S)+1)/2];
	for (int i=0; i<strlen(S); i+=2)
	{
		A[count++] = S[i]-48;
	}
	sort(A, A+count);
	int p=0;
	for(int i=0; i<count; i++)
	{
		cout<<A[p++];
		if(i<count-1)
			cout<<"+";
	}
	return 0;
}
