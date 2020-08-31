#include<bits/stdc++.h>
using namespace std;
int main()
{
        int time,N,ans=-1;
        cin>>N>>time;
        int A[N];
        for(int i=0; i<N; i++)  cin>>A[i];
        int l=0,sum=0,k=0,x=0,r=0;
        while (l<N && r<N)
        {
            sum+=A[r++];
            if(sum>time)
            {
                sum-=A[l++];
            }
            if(sum<=time)
            {
                ans = max(r-l,ans);
            }
        }
        cout<<ans<<"\n";
    return 0;    
}