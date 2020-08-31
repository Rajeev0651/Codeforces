#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N,a,b;
        char p = 'a';
        cin>>N>>a>>b;
        char s[a];
        int count = a;
        for(int i=0; i<a; i++)
        {   
            if(count>0)
            {
                s[i] = p;   
                b--;
                count--;
            }
            if(b>0)
                p++;
        }
        for(int i=0; i<N; i++)
        {
            cout<<s[i%a];
        }
        cout<<"\n";
    }
    return 0;
}