#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		if(a!=b && a<b)
		{
			if(a%2==0 && b%2==1)
				cout<<"1\n";
			if(a%2==0 && b%2==0)
				cout<<"2\n";
			if(a%2==1 && b%2==0)
				cout<<"1\n";
			if(a%2==1 && b%2==1)
				cout<<"2\n";	
		}
		else if(a!=b && a>b)
		{
			if(a%2==0 && b%2==1)
				cout<<"2\n";
			if(a%2==0 && b%2==0)
				cout<<"1\n";
			if(a%2==1 && b%2==0)
				cout<<"2\n";
			if(a%2==1 && b%2==1)
				cout<<"1\n";		
		}
		else
			cout<<"0\n";				
	}
	return 0;
}
