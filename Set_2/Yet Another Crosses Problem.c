#include<stdio.h>
int min(int,int);
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,m,i,j,ans = 50005;
		scanf("%d%d",&n,&m);
		char A[n+5][m+5];
		int row[n+5],col[m+5];
		for(i=0; i<n; i++)
			scanf("%s",A[i]);		
		for(i=0; i<n; i++)
		{	for(j=0; j<m; j++)
			{	if(A[i][j] =='.')
				{	row[i]++;
					col[j]++;	
		}   }   }
		for(i=0; i<n; i++)
		{	for(j=0; j<m; j++)
			{	
				ans	= min(ans,row[i]+col[j]-(A[i][j]=='.'));
		}   }
		printf("%d\n",ans);		
	}
	return 0;
}
int min(int x,int y)
{
	if(x<y)
		return x;
	else if(y<=x)
		return y;
}
