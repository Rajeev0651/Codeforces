#include<bits/stdc++.h>
using namespace std;
vector<int> X;
int main()
{
    long int x,l=0,sum=0;
    for(int i=0; i<=10000000; i++)
    {
        sum+= pow(2,i);
        if(sum<=1000000000)
        {
            X.push_back(sum);
        }
        else break;
    }    
    int T;
    cin>>T;
    while (T--)
    {
        long int N,sum=0,x=0,k;
        cin>>N;
        for(int i=1; i<=1000000000; i++)
        {
            if(N%i!=0)
                continue;
            k = N/i;
            if(binary_search(X.begin(), X.end(),k))
            {
                cout<<i<<"\n";
                break;
            }
        }
    }
    return 0;
}