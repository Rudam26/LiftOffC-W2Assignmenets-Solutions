#include<stdio.h>
int main()
 {
     int a=0,b=1,c,i,n;
     printf("Enter the number of elements:");
     scanf("%d",&n);
     printf("\n%d \n%d",a,b);
     for(i=2;i<n;++i)
     {
         c=a+b;
         printf("\n%d",c);
         a=b;
         b=c;
     }
     return 0;
 }