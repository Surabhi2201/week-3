#include <stdio.h>
int main()
{
	int a,n,s,b,i;
	printf("Enter the term:-");
	scanf("%d",&n);
	a=0,b=1,s;
	for(int i=0;i<n-2;i++)
	 {
	  s=a+b;
	  a=b;
	  b=s; 
	 }
	printf("%d",s);
	
	
}
