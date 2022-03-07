#include<stdio.h>
#define MAXROW 10
#define MAXCOL 10

int main()
{
    int matrix[MAXROW][MAXCOL];
    int a,b,c,d;
    int sum,product;

    printf("Enter number of Rows :");
    scanf("%d",&c);
    printf("Enter number of Cols :");
    scanf("%d",&d);
    printf("\nEnter matrix elements :\n");
    for(a=0;a<c;a++)
    {
        for(b=0;b<d;b++)
        {
            printf("Enter the number[%d,%d]: ",a+1,b+1);
            scanf("%d",&matrix[a][b]);
        }
    }
        sum=0;
        product=1;
        for(a=0;a<c;a++)
        {
            for(b=0;b<d;b++)
            {
                sum+=matrix[a][b];
                product*=matrix[a][b];
            }
        }
        printf("\nSum of all elements:%d \nProduct of all elements :%d",sum,product);
        return 0;

}