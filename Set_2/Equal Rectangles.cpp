#include<bits/stdc++.h>
using namespace std;
int fnc(const void *a, const void *b)
{
	return(*(long int*)a - *(long int*)b);
}
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		long int N,b,flag=1,x,q=1;
		cin>>N;
		long int A[4*N+5],B[N*2+5];
		for(long int i=0; i<N*4; i++)
		{
			cin>>A[i];			
		}
		qsort(A,N*4,sizeof(long int),fnc);
		B[0] = A[0];
		for(long int i=1,j=1; i<(N*4); i++)
		{	
			if(A[i]!=B[j-1])
			{
				B[j++] = A[i];q++;
			}		
		}
	/*	for(int i=0; i<q; i++)
			cout<<B[i]<<"\t";*/
		for(long int i=0,j=q-1; i<j; i++,j--)
		{
			if((B[i]*B[j])!=(B[i+1]*B[j-1]))
				{
					flag=0;
					break;	
				}	
		}
		if(flag==1)
			cout<<"YES\n";
		else if(flag==0)cout<<"NO\n";	
	}
	return 0;
}
