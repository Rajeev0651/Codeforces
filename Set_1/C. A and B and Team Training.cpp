#include<bits/stdc++.h>
using namespace std;
int f(int N, int M)
{
	cout<<N<<" "<<M<<"\n";
	int res=0;
	if((N==1 && M==2)||(N==2 && M==1))
		return 1;
	if((N<=0 || M<=0)||(N==1 && M==1))	
		return 0;
	res += max(f(N-1,M-2),f(N-2,M-1));
	return res;	
}
int main()
{
	int N,M,res;
	cin>>N>>M;
	res = f(N,M);
	cout<<res;
	return 0;
}
