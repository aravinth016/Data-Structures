#include<stdio.h>
int linsearch(int a[],int n,int val)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==val)
		{
			return i+1;
		}
	}
}
int main()
{
	int a[]={70,40,30,11,57,41,25,14,52};
	int val=41;
	int n=sizeof(a)/sizeof(a[0]);
	int res=linsearch(a,n,val);
	printf("the elements of the array are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d  ",a[i]);
	}
	printf("\nelement to be searched-%d",val);
    if(res==-1)
    {
    	printf("\nelement is not present in the array");
	}
	else
	{
		printf("\nelement is present in %d position of array",res);
	}
	return 0;
}
