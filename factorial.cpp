#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the number whose factorial you want:-");
scanf("%d",&b);
c=1;
for(int a=1;a<=b; a++)
 {
 c=c*a;
 }
 printf("The factorial of given number is:-%d",c);
 return(0);
}
