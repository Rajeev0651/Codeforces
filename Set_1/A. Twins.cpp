#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,summ=0,sum1=0,count=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		summ+=a[i];	
	}	
	sort(a, a+n, greater<int>());
	for(int i=0; i<n; i++)
	{
		sum1+=a[i];
		summ-=a[i];
		count++;
		if(sum1>summ)
			break;	
	}	
	cout<<count;
	return 0;
}
