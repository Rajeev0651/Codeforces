#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,r,x=1,count=0;
	cin>>k>>r;
	for(int i=1; i<=10; i++)
	{
		x = k*i;
		count++;
		if(x%10==0)
		{
			cout<<count;
			break;
		}
		if(x%10==r)
		{
			cout<<count;
			break;	
		}	
	}
	return 0;
}
