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
        long int A[N+1];
        for(int i=1; i<=N; i++)
            cin>>A[i];
        sort(A+1, A+N+1);
        int x = 0,l=((N/2)-1),r=((N/2)+1);
        if(N%2==1)
        {
            l++;
            r++;
        }
        cout<<A[N/2]<<" ";
        for(int i=1; i<N; i++)
        {
            if(x%2==0)
            {
                if(r>N)
                    continue;
                cout<<A[r++]<<" ";
                x++;
            }
            else
            {
                if(l<0)
                    continue;
                cout<<A[l--]<<" ";
                x++;
            }    
        }
        cout<<"\n";
    }
    return 0;
}