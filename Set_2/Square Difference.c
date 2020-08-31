#include<stdio.h>
#include<math.h>
int isprime(unsigned int long long x)
{
	unsigned long long int i;
	if(x<=1)return 0;
	if(x<=3)return 1;
	if(x%2==0 || x%3==0)
	return 0;
	for(i=5; i<=sqrt(x); i+=6)
	{
		if(x%(i)==0 || x%(i+2)==0)
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		unsigned long long int a,b,c;
		int res;
		scanf("%I64d%I64d",&a,&b);
		c = (a*a)-(b*b);
		res = isprime(c);
		if(res==1)
		printf("YES\n");
		else
		printf("NO\n");
	}
	return 0;
}
