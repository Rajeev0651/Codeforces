#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int freq[200001],dis=0;
        memset(freq, 0, sizeof(int)*200001);
        int N;
        cin>>N;
        int A[N];
        for(int i=0; i<N; i++)
        {
            cin>>A[i];
            if(freq[A[i]]==0)
                dis++;
            freq[A[i]]++;
        }
        sort(A, A+N);
        int same=0;
        for(int i=1; i<=200000; i++)
        {
            same = max(same,freq[i]);
        }
        if(dis==same)
        {
            cout<<dis-1<<"\n";
            continue;
        }
        //cout<<dis<<" "<<same<<"\n";
        cout<<min(same,dis)<<"\n";
    }
    return 0;
}