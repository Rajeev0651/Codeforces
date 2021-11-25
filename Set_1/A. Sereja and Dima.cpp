#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int> A(N);
    for(int i=0; i<N; i++)
    {
        cin>>A[i];
    }
    int l=0,r=N-1,x=0,y=0,s=0;
    while(l<=r)
    {
        if(s%2==0)
        {
            x+=max(A[l],A[r]);
            if(A[l]>=A[r])  l++;
            else    r--;
        }
        else
        {
             y+=max(A[l],A[r]);
            if(A[l]>=A[r])  l++;
            else    r--;
        }
        s++;
             
    }
    cout<<x<<" "<<y<<"\n";
    return 0;
}