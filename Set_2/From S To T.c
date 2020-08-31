#include<stdio.h>
#include<string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char s[100],t[100],q[100];
		int S[26]={0},T[26]={0},Q[26]={0},i,flag=0;
		scanf("%s",s);
		for(i=0; i<strlen(s); i++)
			S[s[i]-97]++;
		scanf("%s",t);
		for(i=0; i<strlen(t); i++)
			T[t[i]-97]++;
		scanf("%s",q);
		for(i=0; i<strlen(q); i++)
			Q[q[i]-97]++;
		for(i=0; i<26; i++)
		{
			printf("%d\t%d\t%d\n",S[i],T[i],Q[i]);
		}	
		for(i=0; i<strlen(t); i++)
		{
			if(T[t[i]]>S[t[i]]+Q[t[i]])
			{
				flag=1;
				break;
			}	
		}
		if(flag==1)
		printf("NO\n");
		else 
		printf("YES\n");	
	}
	return 0;
}
