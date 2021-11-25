#include<bits/stdc++.h>
using namespace std;
int main()
{
	int N,min,val,x,ans,c,pre;
	cin>>N;
	for(int i=0; ;i++)
	{
		x = 5*pow(2,i);
		if(N<x)
		{	if(i==0) pre=0;
			else 
			{
				pre = 5*pow(2,i-1);
			}
			c = pow(2,i);
			min = i;
			break;
		}
	}
	val = N-pre-1;
	ans = val/c;
	cout<<pre<<"\t"<<5*c<<"\t"<<val<<"\n";
	switch(ans)
	{
		case 0: cout<<"Sheldon\n";break;
		case 1: cout<<"Leonard\n";break;
		case 2: cout<<"Penny\n";break;
		case 3: cout<<"Rajesh\n";break;
		case 4: cout<<"Howard\n";break;
	}
	return 0;
}
