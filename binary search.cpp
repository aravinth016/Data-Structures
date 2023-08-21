#include<stdio.h>
int binsearch(int a[],int low,int high,int x)
{
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		if(a[mid]<x)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}return -1;
}
int main()
{
    int a[]={3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int x=8;
    int result=binsearch(a,0,n-1,x);
    if(result==-1)
    {
    	printf("not found");
	}
	else
	{
		printf("element is found in %d index of the array",result);
	}
	return 0;
	
}
