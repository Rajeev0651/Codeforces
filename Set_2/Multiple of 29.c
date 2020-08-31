#include<stdio.h>
int main()
{
	unsigned long long i,q,f=29,s,sum=0,res;
	for(i=1; i<=10000; i++)
	{
		q = f*i;
		s = q;
		sum = 0;
		while(s)
		{
			sum = sum+(s%10);
			s = s/10;	
		}
	//	printf("%llu\n",sum);
		if((q%100)==29 && sum==29)
		{
			printf("%llu",q);
		break;
		}
	}	
	return 0;
}
