#include<bits/stdc++.h>
using namespace std;
int main()
{
    string S,ans="quiet";
    cin>>S;
    int flag=0;
    for(int i=0; i<S.length(); i++)
    {
        if(S[i]=='$')
            flag=1;
        if(flag==1 && S[i]=='T')
        {
            ans = "ALARM";
            break;
        } 
        if(S[i]=='G')
            flag = 0;   
    }
    for(int i=0; i<S.length(); i++)
    {
        if(S[i]=='T')
            flag=1;
        if(flag==1 && S[i]=='$')
        {
            ans = "ALARM";
            break;
        } 
        if(S[i]=='G')
            flag = 0;   
    }
    cout<<ans<<"\n";
    return 0;
}