#include <iostream>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    long long int K,D0,D1,ans,P,X=0,S;
	    cin>>K>>D0>>D1;
        P = D0+D1;
        ans = P+(P)%10;
        S = (2*(P))%10 + (4*(P))%10 + (8*(P))%10 + (6*(P))%10;
        X = (K%4 + 1)%4;
        if(K>=3)
        {
            if(X==1)
                X = (2*(P))%10;
            else if(X==2)
                X = (2*(P))%10 + (4*(P))%10;
            else if(X==3)
                X = (2*(P))%10 + (4*(P))%10 + (8*(P))%10;  
            else X=0; 
            ans += S*((K-3)/4) + X;
        }         
    //    cout<<ans<<"\n";
        if(K==2 && (P)%3==0)
            cout<<"YES\n";
	    else if(ans%3==0)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}