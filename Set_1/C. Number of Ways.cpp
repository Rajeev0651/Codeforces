#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,sum=0,val,temp=0,x,im=0,l=3,pass=0;
	int a[3]={0},cur=0,flag=0,ans=1,al=0,z1=0,z2=0;
	cin>>N;
	int A[N];
	for(int i=0; i<N; i++)
	{
		cin>>A[i];
		sum+=A[i];
	}
	if(sum%3==0 && N>=3)
	{
		val = sum/3;
		while(l--)
		{
			while(1)
			{		
				im+=A[cur++];
				if(im>=val)
				{
					if(im==val)
						{	
							a[al++] = cur;				
							break;	
						}
					else
					 flag = 1;
					 break;			
				}	
			}
			im = 0;
			if(flag==1)
				break;			
		}
	}
	cout<<a[0]<<" "<<a[1]<<"\n";
	while(A[a[0]++]==0)
	{
		z1++;
	}
	while(A[a[1]++]==0)
	{
		z2++;
	}
	cout<<z1<<" "<<z2<<"\n";
	ans = (z1+1)*(z2+1);
	if(flag==1 || sum%3!=0 || N<3)
		cout<<"0\n";
	else
		cout<<ans<<"\n";	
	return 0;	
}
