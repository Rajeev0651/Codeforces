#include<bits/stdc++.h>
using namespace std;
int num_to_bits[16] = { 0, 1, 1, 2, 1, 2, 2, 3, 
                        1, 2, 2, 3, 2, 3, 3, 4 }; 
unsigned int countSetBitsRec(unsigned int num) 
{ 
    int nibble = 0; 
    if (0 == num) 
        return num_to_bits[0]; 
    nibble = num & 0xf;  
    return num_to_bits[nibble] + countSetBitsRec(num >> 4); 
}                        
int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	int T;
	cin>>T;
	while(T--)
	{
		int N,q,even=0,odd=0,val;
		cin>>N>>q;
		long long int A[N],Q[q],prod;
		for(int i=0; i<N; i++)
			cin>>A[i];
		for(int i=0; i<q; i++)
			cin>>Q[i];
		for(int i=0; i<N; i++)
		{
			prod = A[i]^Q[0];
			val = countSetBitsRec(prod);
			if(val%2==0)
				even++;
			else
				odd++;		
		}	
		int p = countSetBitsRec(Q[0]);
		p = p%2;
		for(int i=0; i<q; i++)
		{
			if((countSetBitsRec(Q[i])%2)==p)
			{
				cout<<even<<" "<<odd<<"\n";
			}
			else
			{
				cout<<odd<<" "<<even<<"\n";
			}
		}		
	}
	return 0;
}
