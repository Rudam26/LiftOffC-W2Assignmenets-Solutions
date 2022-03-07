#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter the number N:- ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("* ");
    }
    printf("\n");
    for(i=0;i<n-1;i++)
    {
        printf("* ");
        for(j=0;j<n-2;j++)
        {
            printf("  ");
        }
        printf("*");
        printf("\n");
    
    
    }
    for(i=0;i<n;i++)
    {
        printf("* ");
    }
    return 0;
}