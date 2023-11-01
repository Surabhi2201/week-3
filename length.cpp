#include <stdio.h>
int main()
{
int a,b;
printf("Enter the number:-");
scanf("%d",&b);
a=0;
while(b>0)
 {
 b=b/10;
 a++; 
}
printf("%d",a);
return(0);
}
