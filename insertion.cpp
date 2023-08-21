#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	int arr[n],pos,ele;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element and position to be added at:\n");
	scanf("%d%d",&ele,&pos);
	if(pos>n)
	{
		printf("invalid input");
	}
	else
	{
		for(i=n-1;i>=pos;i--)
		{
			arr[i+1]=arr[i];
			arr[pos-1]=ele;
		}
	
	printf("array after insertion:\n");
	for(i=0;i<=n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
}
