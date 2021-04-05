#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char A[10][10],q;
        int frq[10];
        memset(frq, 0, sizeof(int)*10);
        for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
            {
                cin>>q;
                A[i][j] = q;
                if(i==j)
                {
                    frq[q-'0']=1;
                }
            /*    if(i==j)
                {
                    if(A[i][j] =='9')
                        A[i][j] = '1';
                    else
                    {
                        A[i][j]+= 1;  
                    }    
                }*/
            }
        }
        char s='0';
        for(int i=1; i<=9; i++)
        {
            if(frq[i]==0){
                s = '0'+i;    break;
            }
        }
        for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
            {
                if(A[i][j]=='1')
                    cout<<'2';
                else               
                     cout<<A[i][j];  
            }
            cout<<"\n";
        }
    }
    return 0;
}