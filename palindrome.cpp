#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	int original=n;
	int rev=0;
	while(n>0)
	{
		int a=n%10;
		rev=rev*10+a;
		n=n/10;
	}
	if(rev==original)
	{
		printf("its a palindrome");
	}
	else
	{
		printf("its not a palindrome");
	}
	return(0);
}
