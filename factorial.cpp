#include<stdio.h>
int fact();
int main()
{
	int f;
	f=fact();
	printf("the factorial is %d",f);
}
int fact()
{
	int fact=1,n,i;
	printf("enter tne value ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}
