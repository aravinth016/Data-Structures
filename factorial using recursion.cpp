#include<stdio.h>
int fact(int n)
{
	if(n==0)
	   return 1;
	else
	 return(n*fact(n-1));
}
int main()
{
	int factt,n;
	printf("enter a no");
	scanf("%d",&n);
	factt=fact(n);
	printf("factorial is %d",factt);
	return 0;
}

