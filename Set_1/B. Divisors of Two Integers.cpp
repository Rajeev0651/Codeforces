#include<bits/stdc++.h>
using namespace std;
int main()
{
		int N,val2=-1,A[100000]={0},x,maxd=1,res[2],len=0;
		cin>>N;
		int B[N];
		for(int i=0; i<N; i++)
		{
			cin>>B[i];
			A[B[i]]++;
		}
		for(int i=2; i<=10000; i++)
		{
			if(A[i]==2)
				maxd = i;
		}
		sort(B,B+N);
		if(maxd==1)
		{
			for(int i=N-1; i>1; i--)
			{
				if(B[N-1]%B[i]!=0)
				{
					val2 = B[i];
					break;
				}
			}
			if(val2!=-1)
			{
				cout<<B[N-1]<<" "<<val2;
			}
			else
			cout<<B[N-1]<<" 1";
		}
		else
		{
			cout<<B[N-1]<<" ";
			for(int i=N-2; i>1; i--)
			{
				if(B[i]%maxd==0 && B[i]>maxd)
					val2 = B[i];
			}
			if(val2==-1)	val2 = maxd;
			cout<<val2;
		}
	return 0;
}
