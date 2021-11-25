#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	if(N%2==0)
	{
	cout<<(N/2)<<"\n";
	for(int i=1; i<=N/2; i++)
		cout<<"2 ";
	cout<<"\n";		
	}
	else
	{
		cout<<(N/2)<<"\n";
		for(int i=1; i<(N/2); i++)
			cout<<"2 ";
		cout<<"3\n";	
	}
	return 0;		
}
