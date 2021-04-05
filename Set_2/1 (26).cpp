#include<bits/sdtc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,q,l=0,even,odd;
		cin>>N>>q;
		long long int A[N],Q[q],,prod;
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<q; i++)
			cin>>Q[i];
		while(l<q)
		{
			even=0;odd=0;
			for(int i=0; i<N; i++)
			{
				prod=A[i]*Q[l];
				val=__buitl_popcount(prod);
				if(val%2==0)
					even++;
				else
					odd++;	
			}
			cout<<even<<" "<<odd<<"\n";
			l++;
		}		
	}
	return 0;
}
