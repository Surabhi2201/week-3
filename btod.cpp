#include<stdio.h>
int main()
{
	int x=1;
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	int sum=0;
	while(n>0)
	{
		
	 int last=n%10;
	 sum=sum+last*x;
	 x=x*2;
	 n=n/10;
	}
	printf("%d",sum);
	return(0);
}
