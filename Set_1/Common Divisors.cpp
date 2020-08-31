#include<bits/stdc++.h>
using namespace std;
int fnc(const void *a, const void *b)
{
	return(*(long int*)a - *(long int*)b);
}
int main()
{
	long int N,flag=1,ans=0;
	cin>>N;
	long int A[N];
	for(int i=0; i<N; i++)
		cin>>A[i];
	for(int i=0; i<N; i++)
		{	flag=1;
			for(int j=0; j<N; j++)
			{
				if(A[j]%A[i]!=0)
				{
					flag=0;
					break;
				}
			}
			if(flag==1)	ans++;
		}
	cout<<ans<<"\n";
	return 0;		
}
