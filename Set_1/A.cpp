#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,ans;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        double x = N;
        if(N%2==0)
        {
            ans = x-(x/2)-1;
            cout<<ans<<"\n";
        }
        else
        {
            ans = x-ceil(x/2);
            if(ans>=0)
                cout<<ans<<"\n";
            else
            {
                cout<<"0\n";
            }

        }
    }
    return 0;
}