#include<stdio.h>
int main()
{
 int x,a,n,sum;
 scanf("%d",&n);
 x=n%10;
 while(n>0)
 {
 a=n%10;
 n=n/10;
 
 }
 printf("%d\n",a);
 printf("%d\n",x);
 sum=x+a;
 
 printf("%d",sum);
 return(0);
}
