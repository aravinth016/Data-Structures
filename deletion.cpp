#include<stdio.h>
int main()
{
	int arr[10],pos,i,n;
	printf("enterthe no of elements of the array:\n");
	scanf("%d",&n);
	printf("input the array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the position:");
	scanf("%d",&pos);
	if(pos>=n+1)
	{
		printf("deleteion is not possible");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			arr[i]=arr[i+1];
			printf("array after deletion:");
			for(i=0;i<n-1;i++)
			{
			printf("%d\n",arr[i]);
        }
				}
	}
}
