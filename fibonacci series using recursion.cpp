#include<stdio.h>
int fibon(int n)
{
	int f1=0,f2=1,f3;
	if(n>0)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
		printf("%d",f3);
		fibon(n-1);
	}
}
int main()
{
	int n,f;
	printf("enter the range:\n");
	scanf("%d",&n);
	printf("0\n1\n");
	f=fibon(n);
	fibon(n-2);
	return 0;
}
