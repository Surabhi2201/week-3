#include <stdio.h>
int main()
{
int a,N,c;
printf("Enter the number N:-");
scanf("%d",&N);
for (int a=1 ;a<=10; a++)
 {
 c=a*N;
 printf("%d*%d=%d\n",a,N,c);	
 }
 return(0);

}
