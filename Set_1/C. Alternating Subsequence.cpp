#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while (T--)
    {
        int N;
        cin>>N;
        int A[N],B[N];
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
            B[i] = A[i]/abs(A[i]);
        }  
        int l=0,r=0,ans=INT_MIN,curr,prev,count=1;
        int a=0,b=0,c,d,n;
        
        cout<<ans<<" "<<c<<" "<<d<<"\n";
    }
    
}