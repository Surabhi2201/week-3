#include <stdio.h>
int main()
{
	int a,n,s,b,i;
	printf("Enter the term:-");
	scanf("%d",&n);
	a=0,b=1;
	for(int i;i<n;i++)
	 {
	  s=a+b;
	  i=b;
	  b=s; 
	 }
	printf("%d",s);
	
	
}
