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
        if((N/2)%2==1)
        {
            cout<<"NO\n";
            continue;
        }
        else
        {
            long long int sum=0,p=0;
            cout<<"YES\n";
            for(int i=2; i<=N; i+=2)
            {
                cout<<i<<" ";
                p+= i;
            }
            for(int i=1; i<=N; i+=2)
            {
                if(i==N-1)
                {
                    for(int i=N+1; i<=2000000; i+=2)
                    {
                        if(sum+i==p)
                        {
                            cout<<i;
                            break;
                        }
                    }
                }
                else
                {
                        cout<<i<<" ";
                }
                sum+=i;
            }
        }
        cout<<"\n";
    }
    return 0;
}
