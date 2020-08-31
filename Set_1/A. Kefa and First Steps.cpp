#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,max=1,curmax=1,flag=0;
	cin>>N;
	int A[N];
	for(int i=0; i<N; i++)
		cin>>A[i];
	for(int i=0; i<N-1; i++)
	{
		if(A[i+1]>=A[i])
		{
			curmax++;
		}
		else
		{	flag=1;
			max = (curmax>max)?curmax:max;
			curmax=1;	
		}		
	}
	if(curmax>max)	max = curmax;
	cout<<max<<"\n";
	return 0;	
}
