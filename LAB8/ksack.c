#include<stdio.h>
#include<stdlib.h>
int c,x,y;
int max(int a,int b)
{
	if(a>b)
		c=a;
	else
		c=b;
		
	return c;
}


int main()
{
	int i,j,k,n,M,m;
	int *w,*v;
	printf("Enter the no of itmes\n");
	scanf("%d",&n);
	w=(int *)malloc((n)*sizeof(int));
	v=(int *)malloc((n)*sizeof(int));
	printf("Enter the weight and value of itmes\n");
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&w[i],&v[i]);
	}
	int c[n][M];
	printf("Enter the value of M\n");
	scanf("%d",&M);
	for(i=0;i<n;i++)
	{
		for(m=0;m<=M;m++)
		{
			if(i==0 && m==0)
				c[i][m]=0;
			else if(w[i]>m)
				c[i][m]=c[i-1][m];
			else if(i>0 && w[i]<=m)
				c[i][m]=max( (v[i]+c[i-1][m-w[i-1]]) , (c[i-1][m]) );
				
		}
	}
	
	for(i=0;i<n;i++)
	{
		for(m=0;m<M;m++)
		{
			printf("%d\t",c[i][m]);
		}
		printf("\n");
	}
}
