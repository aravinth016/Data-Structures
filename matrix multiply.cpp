#include<stdio.h>
int main()
{
	int x[10][10],y[10][10],z[10][10],c,r,i,j,k;
	printf("enter the no of rows and columns:\n");
	scanf("%d%d",&r,&c);
	printf("enter the elements of x:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
		printf("enter the elements of y:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&y[i][j]);
		}
	}
		printf("enter the elements of z:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		z[i][j]=0;
			for(k=0;k<3;k++)
			{
				z[i][j]+=x[i][k]*y[k][j];
			}
		}	
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",z[i][j]);
		}printf("\n");
	}
}
