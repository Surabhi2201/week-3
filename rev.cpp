#include<stdio.h>
int main()
{
 int n;
 printf("Enter A Number:");
 scanf("%d",&n);
 int rev=0;
 int a;
 while(n>0)
 {
 a=n%10;
 rev=rev*10+a;
 n=n/10;
 }
 printf("Reverse Of The Number is %d",rev);
 return(0);
 
}
