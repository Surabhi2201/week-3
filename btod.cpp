#include<stdio.h>
int main()
{
	int x=1;
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	int sum=0;
	while(n>x)
	{
		
	 int last=n%(x*2);
	 sum=sum+last*x;
	 x=x*2;
	 n=n/10;
	}
	printf("%d",sum);
	return(0);
}
