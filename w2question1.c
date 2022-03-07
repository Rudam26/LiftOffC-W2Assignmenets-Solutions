#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    printf("Input two strings one by one");
    gets(a);
    gets(b);
    strcat(a,b);
    int i,c=strlen(a);
    for(i=c;i>=0;i--)
    {
        printf("\n %c",a[i]);

    }
    return 0;
}