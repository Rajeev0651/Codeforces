//https://codeforces.com/contest/1328/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long int p,x=2,y=1,flag=0,l,st;
        cin>>l>>p;
        for(long int i=1; i<l; i++)
        {
            if((y+1)<x)
            {
                y++;
            }
            else
            {
                x++;
                y=1;
            }
        }
      //   cout<<x<<" "<<y<<"\n";
        for(long int i=l; i>=1; i--)
        {
            if(i==x && flag==0)
            {
                cout<<"b";
                flag=1;
            }
            else if(i==y && flag==1)
                cout<<"b";
            else
                cout<<"a";    
        }
        cout<<"\n";
    }
    return 0;
}