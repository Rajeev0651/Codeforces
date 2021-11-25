#include<stdio.h>
int main()
{
	int n,first,last=1,sum,N,a;
	scanf("%d",&N);
	first = N*2-1;
	a = first-2;
	n = ((1-a)/(-2))+1;
	sum = (n*(a+last))/2;
	sum = sum*2;
	sum = sum+first;
	printf("%d\n",sum);
	return 0;
}
