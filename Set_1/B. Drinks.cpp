#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N;
	cin>>N;
	float A[N],ans=0;
	for(int i=0; i<N; i++)
		cin>>A[i];
	for(int i=0; i<N; i++)
		ans+= A[i];	
	ans/=N;
	printf("%.4f",ans);
	return 0;	
}
