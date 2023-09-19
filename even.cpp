#include <stdio.h>
int main()
{
int a,b;
printf("Even number upto-");
scanf("%d",&b);
for(int a=1; a<b; a++)
 {
 	if (a%2==0)
 	 printf("%d\n",a);
 }
return(0);
}
