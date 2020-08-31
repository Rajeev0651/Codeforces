#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int N,l;
	float diff=0,x1,x2,x3,ans;
	cin>>N>>l;
	int A[N];
	for(int i=0; i<N; i++)
		cin>>A[i];
	sort(A,A+N);
	x1 = abs(A[0]);	
	x2 = abs(l-A[N-1]);
	for(int i=1; i<N; i++)
	{
		x3 = abs(A[i]-A[i-1]);
		if(x3>diff)
			diff = x3;			
	}
	diff = (diff*0.5);
	ans = max(diff,max(x1,x2));
	printf("%.9f",ans);
	return 0;	
}
