#include <stdio.h>
int main()
{
int a,b,s;
printf("Enter the upto how many natural numbers you want sum");
scanf("%d",&b);
for(int a=1;a<b; a++)
 {
 s=s+a;
 }
 printf("%d",s);
return(0);
}
