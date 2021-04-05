#include<stdio.h>
int main()
{
	int d,n,m,x,y,sum=0;
	scanf("%d%d",&n,&d);
	scanf("%d",&m);
	int xy[m][2];
	for(x=0; x<m; x++){
	 for(y=0; y<2; y++)
	{	scanf("%d",&xy[x][y]);
	}}
	for(x=0; x<m; x++)
	{	int up=0,down=0,right=0,left=0,X=0,Y=0;
			X=xy[x][0];
			Y=xy[x][1];
			up=Y-X-d;
			down=(Y-X+d);
			right=(Y-d+X);
			left=(Y+X+d-(2*n));
			if((up<=0)&&(down>=0)&&(right>=0)&&(left<=0))
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}		
	
	}
	return 0;
}
